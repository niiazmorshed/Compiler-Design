#!/usr/bin/env bash
# Stage 4: two-pass compiler (pass 1: parse + AST + checks, pass 2: three-address code -> code.txt)
# Usage: ./run.sh [source.c]   (defaults to input.c)
set -euo pipefail
cd "$(dirname "$0")"

bison -d -y parser.y                   # parser -> y.tab.c / y.tab.h
flex lexer.l                           # scanner -> lex.yy.c
g++ -w -c -o y.o y.tab.c
g++ -fpermissive -w -c -o l.o lex.yy.c
g++ y.o l.o -o compiler

./compiler "${1:-input.c}"
echo "------------ error.txt ------------"; cat error.txt
echo "------------ code.txt -------------"; cat code.txt
