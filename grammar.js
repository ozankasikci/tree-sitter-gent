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
      'if',
      'else',
      'return',
      'use',
      'output',
      'for',
      'in'
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
    // String with interpolation support - matches "..." including {expr} inside
    string: $ => /"([^"\\{]|\\.|\{[^}]*\})*"/,
    number: $ => /\d+(\.\d+)?/,

    // Identifiers (anything else that looks like a word)
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Operators
    operator: $ => choice(
      '->',
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
