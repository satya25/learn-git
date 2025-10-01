# 🛠️ Makefile for DS Mini-Project (C Language)
# This file automates compilation of each module and its corresponding test.
# Students can run 'make' to build all targets, or 'make stack' to build one.

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Iinclude -mconsole


# Source and test files
STACK_SRC = src/stack.c
STACK_TEST = tests/test_stack.c
STACK_OUT = stack

EXPR_SRC = src/expression.c
EXPR_TEST = tests/test_expression.c
EXPR_OUT = expr

HANOI_SRC = src/hanoi.c
HANOI_TEST = tests/test_hanoi.c
HANOI_OUT = hanoi

# 🧱 Default target: build all modules
all: $(STACK_OUT) $(EXPR_OUT) $(HANOI_OUT)

# 🧪 Build stack module and test
$(STACK_OUT): $(STACK_SRC) $(STACK_TEST) include/stack.h
	@echo "🔧 Compiling Stack Module..."
	$(CC) $(CFLAGS) -o $(STACK_OUT) $(STACK_SRC) $(STACK_TEST)

# 🔄 Build expression conversion module and test
$(EXPR_OUT): $(EXPR_SRC) $(EXPR_TEST) include/expression.h
	@echo "🔧 Compiling Expression Module..."
	$(CC) $(CFLAGS) -o $(EXPR_OUT) $(EXPR_SRC) $(EXPR_TEST)

# 🗼 Build Tower of Hanoi module and test
$(HANOI_OUT): $(HANOI_SRC) $(HANOI_TEST) include/hanoi.h
	@echo "🔧 Compiling Hanoi Module..."
	$(CC) $(CFLAGS) -o $(HANOI_OUT) $(HANOI_SRC) $(HANOI_TEST)

# 🧹 Clean build artifacts
clean:
	@echo "🧹 Cleaning up..."
	rm -f $(STACK_OUT) $(EXPR_OUT) $(HANOI_OUT)

# 📘 Help message
help:
	@echo "📘 Usage:"
	@echo "  make           → Build all modules"
	@echo "  make stack     → Build only stack module"
	@echo "  make expr      → Build only expression module"
	@echo "  make hanoi     → Build only hanoi module"
	@echo "  make clean     → Remove compiled binaries"
