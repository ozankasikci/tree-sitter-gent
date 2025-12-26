# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Tree-sitter grammar for the Gent programming language. Provides syntax parsing for editors and tools.

## Commands

```bash
npm run generate    # Generate parser from grammar.js
npm run test        # Run tests
```

## Key Files

- `grammar.js` - Gent syntax definition (source of truth)
- `src/parser.c` - Auto-generated C parser (don't edit manually)
- `bindings/` - Language bindings (Node, Rust, Python, Swift)

## Related Projects

- **gent-programming-language** (`/Users/ozan/Projects/gent-programming-language`) - Main Gent interpreter
- **zed-gent** (`/Users/ozan/Projects/zed-gent`) - Zed editor extension (uses this as submodule)

When adding new syntax, update: `grammar.js` (this repo) + `grammar.pest` (gent) + `highlights.scm` (zed).
