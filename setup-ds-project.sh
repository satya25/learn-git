#!/bin/bash

# Create folders
mkdir -p src include tests data docs

# Create core source files
touch src/stack.c src/expression.c src/hanoi.c

# Create header files
touch include/stack.h include/expression.h include/hanoi.h

# Create test files and sample output
touch tests/test_stack.c tests/test_expression.c tests/test_hanoi.c tests/sample_output.txt

# Create data file
touch data/students.txt

# Create documentation files
touch docs/stack.md docs/expression.md docs/hanoi.md

# Create root-level files
touch README.md .gitignore Makefile

echo "✅ Project structure created successfully."
