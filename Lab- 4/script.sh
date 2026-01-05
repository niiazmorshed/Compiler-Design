#!/usr/bin/env bash
set -euo pipefail

# Ensure required tools exist before continuing
for tool in bison flex g++; do
	command -v "$tool" >/dev/null 2>&1 || {
		echo "Missing required tool: $tool" >&2
		exit 1
	}
done

# First pass: Generate AST and symbol table (bison provides yacc compatibility)
bison -d -y --debug --verbose 22101783.y
echo 'Generated the parser C file and header file'
g++ -w -c -o y.o y.tab.c
echo 'Generated the parser object file'
flex 22101783.l
echo 'Generated the scanner C file'
g++ -fpermissive -w -c -o l.o lex.yy.c
echo 'Generated the scanner object file'
g++ y.o l.o -o two_pass_compiler
echo 'All ready, running the two-pass compiler...'

# Run the compiler on the input file
./two_pass_compiler input2.c
echo 'Compilation completed.'

# Display output files (skip if missing)
for f in log.txt error.txt code.txt; do
	case "$f" in
		log.txt) label='Log output' ;;
		error.txt) label='Error output' ;;
		code.txt) label='Three Address Code' ;;
		*) label="$f" ;;
	esac
	echo "------------ $label ------------"
	if [[ -f "$f" ]]; then
		cat "$f"
	else
		echo "(missing $f)"
	fi
done
