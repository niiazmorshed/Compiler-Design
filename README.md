# Mini C Compiler

A compiler for a subset of C, written in **C++** with **Flex** and **Bison**. It was built in four stages for CSE420 (Compiler Design), going from raw source text to **three-address code (TAC)**.

```
source.c ─► Lexer ─► Parser ─► Symbol Table ─► Semantic Analysis ─► AST ─► Three-Address Code
            (Flex)   (Bison)   (scoped hashing)  (type & scope checks)       (2nd pass)
            └── Stage 1 ──┘    └── Stage 2 ──┘   └──── Stage 3 ────┘   └────── Stage 4 ──────┘
```

Each stage is a self-contained, runnable compiler that extends the previous one.

| Stage | Folder | What it adds | Output |
|---|---|---|---|
| 1 | [`01-lexical-syntax-analysis`](01-lexical-syntax-analysis) | Token definitions (regex), LALR(1) grammar for a C subset, logging of every token and reduction | `log.txt` |
| 2 | [`02-symbol-table`](02-symbol-table) | Nested-scope symbol table: a stack of hash tables (separate chaining), enter/exit scope, lookup through parent scopes | `log.txt` |
| 3 | [`03-semantic-analysis`](03-semantic-analysis) | Type checking and scope checking with line-numbered error reporting | `log.txt`, `error.txt` |
| 4 | [`04-intermediate-code-generation`](04-intermediate-code-generation) | **Two-pass compiler**: builds an AST in pass 1, then generates three-address code in pass 2 | `log.txt`, `error.txt`, `code.txt` |

## Highlights

- **Language supported:** `int` / `float` / `void` types, 1-D arrays, functions with parameters, `if` / `else` (dangling-else resolved through precedence), `for`, `while`, `return`, `printf`, and arithmetic, relational, logical, `++` / `--` and unary operators with correct precedence.
- **Error recovery:** `error` productions let the parser keep going after a syntax error, so it can report several errors in a single run.
- **Semantic checks:** undeclared or redeclared variables and functions, argument count and type mismatches, return-type mismatch, `void` variables or operands, array misuse (indexing a scalar, non-integer index), division or modulus by zero, `%` on non-integers, nested function definitions, and implicit `float → int` narrowing warnings.
- **AST design:** a class hierarchy of 16 node types (`BinaryOpNode`, `IfNode`, `ForNode`, `FuncCallNode`, and so on). Code generation is polymorphic: each node emits its own TAC.
- **Code generation:** temporaries (`t0, t1, …`), labels and jumps for control flow, `param` / `call` sequences for function calls, and byte-offset array addressing (`int` = 4 bytes, `float` = 8 bytes). Pass 2 runs only if pass 1 finds no errors.

## Example (Stage 4)

Input (`04-intermediate-code-generation/input.c`):

```c
for (i = 0; i < 10; i++) {
    int a;
    a = c + i;
    a = c;
}
```

Generated three-address code (`code.txt`):

```
t15 = 0
i = t15
L0:
t16 = i
t17 = 10
t18 = t16 < t17
if t18 goto L1
goto L2
L1:
// Declaration: int a
t20 = c
t21 = i
t22 = t20 + t21
a = t22
t23 = c
a = t23
t24 = i
t25 = 1
t26 = t24 + t25
i = t26
goto L0
L2:
```

Sample semantic errors reported by Stage 3 (`03-semantic-analysis/error.txt`):

```
At line no: 16 Multiple declaration of variable a in parameter of foo2
At line no: 41 argument 1 type mismatch in function call: func
At line no: 45 Inconsistencies in number of arguments in function call: correct_foo
At line no: 49 Array index is not of integer type: c
At line no: 55 Modulus by 0
At line no: 58 Undeclared function: foo5
Total errors: 19
```

## Build & Run

Requirements: `flex`, `bison` and `g++`.

```bash
./04-intermediate-code-generation/run.sh            # compile the bundled input.c
./04-intermediate-code-generation/run.sh my_prog.c  # or your own file
```

Every stage has the same `run.sh`. It generates the scanner and parser, compiles them into `./compiler`, runs the compiler, and prints the result. The output files committed with each stage are the output for its bundled `input.c`.

## Project Structure

```
├── 01-lexical-syntax-analysis/      lexer.l, parser.y
├── 02-symbol-table/                 + symbol_info.h, scope_table.h, symbol_table.h
├── 03-semantic-analysis/            + semantic checks in parser.y
├── 04-intermediate-code-generation/ + ast.h (AST nodes + codegen), three_addr_code.h
└── Materials/                       course lecture notes (PDF)
```

Stage 1 was done as a pair assignment.
