#!/usr/bin/env bash
# Stage 2: scoped symbol table (parse log + symbol table dump -> log.txt)
# Usage: ./run.sh [source.c]   (defaults to input.c)
set -euo pipefail
cd "$(dirname "$0")"

bison -d -y parser.y                   # parser -> y.tab.c / y.tab.h
flex lexer.l                           # scanner -> lex.yy.c
g++ -w -c -o y.o y.tab.c
g++ -fpermissive -w -c -o l.o lex.yy.c
g++ y.o l.o -o compiler

./compiler "${1:-input.c}"
cat log.txt
