module.exports = grammar({
  name: 'gent',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($._token),

    _token: $ => choice(
      $.comment,
      $.keyword,
      $.type_keyword,
      $.boolean,
      $.null,
      $.string,
      $.number,
      $.method_call,
      $.function_call,
      $.identifier,
      $.operator,
      $.punctuation
    ),

    // Keywords
    keyword: $ => choice(
      'let',
      'agent',
      'tool',
      'struct',
      'fn',
      'if',
      'else',
      'return',
      'use',
      'output',
      'for',
      'in',
      'while',
      'try',
      'catch',
      'break',
      'continue',
      'import',
      'from'
    ),

    type_keyword: $ => choice(
      'string',
      'number',
      'boolean',
      'object',
      'array',
      'any'
    ),

    boolean: $ => choice('true', 'false'),
    null: $ => 'null',

    // Literals
    // String with interpolation support - matches "..." or """...""" including {expr} inside
    string: $ => choice(
      /"""([^{]|\{[^}]*\})*"""/,  // Multiline string
      /"([^"\\{]|\\.|\{[^}]*\})*"/  // Regular string
    ),
    number: $ => /\d+(\.\d+)?/,

    // Method call: .methodName(
    method_call: $ => /\.[a-zA-Z_][a-zA-Z0-9_]*\(/,

    // Function call: functionName(
    function_call: $ => /[a-zA-Z_][a-zA-Z0-9_]*\(/,

    // Identifiers (anything else that looks like a word)
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Operators
    operator: $ => choice(
      '->',
      '=>',
      '..',
      '==',
      '!=',
      '<=',
      '>=',
      '&&',
      '||',
      '[]',
      '+',
      '-',
      '*',
      '/',
      '%',
      '=',
      '<',
      '>',
      '!',
      '.'
    ),

    // Punctuation
    punctuation: $ => choice(
      '(',
      ')',
      '{',
      '}',
      '[',
      ']',
      ',',
      ':',
      ';'
    ),

    // Comments
    comment: $ => /\/\/[^\n]*/,
  }
});
