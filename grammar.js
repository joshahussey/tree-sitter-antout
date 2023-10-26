module.exports = grammar({
  name: "antout",

  rules: {
    source_file: ($) => seq($.build_file, $.comment, repeat($._statement), $.build_result),

    build_file: ($) => seq($.build_file_word, $.file_path),
    build_file_word: ($) => "Buildfile:",
    file_path: ($) => $._string,
    _statement: ($) => choice($.target, $.command),
    target: ($) => seq('\n', /[^:^\n]+:/),
    command: ($) => seq('\n',/\s+/,'[',$.command_type,']', $.description_string),
    description_string: ($) => $._string,

    comment: ($) => $._string,

    build_result: ($) => seq($._build_result_type, $.build_time),
    _build_result_type: ($) => choice($.build_success, $.build_failed),
    build_success: ($) => seq('\n', 'BUILD SUCCESSFUL', '\n'),
    build_failed: ($) => seq('\n', 'BUILD FAILED', repeat1($.failure_string), '\n\n'),//,'\n', repeat($.failure_string)),
    failure_string: ($) => $._string, //seq(/(?!.*Total\stime).*/,'\n'),//$._string,
    
    build_time: ($) => prec(100, seq('Total time: ', $.time_string)),
    time_string: ($) => $._string,

    _string: ($) => /[^\n]+?/,
    command_type: ($) =>
      choice(
        "echo",
        "exec",
        "mkdir",
        "copy",
        "unzip",
        "zip",
        "jar",
        "delete",
        "move",
      ),
  },
});
