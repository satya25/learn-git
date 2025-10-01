# 🔄 Expression Conversion: Infix ↔ Postfix

## 🎯 Objective
Implement two stack-based workflows in C:
1. Convert an infix expression to postfix
2. Convert a postfix expression to infix

## 🧠 Functional Requirements
- Accept valid arithmetic expressions (e.g., `A + B * C`)
- Handle parentheses and operator precedence
- Use stack to manage operators and operands
- Display converted expression

## 🧪 Testing Goals
- Validate conversion logic
- Handle edge cases (nested parentheses, invalid input)
- Compare output with expected result

## 📂 File Mapping
- Implementation: `src/expression.c`
- Header: `include/expression.h`
- Tests: `tests/test_expression.c`

## 💡 Notes
- Use character arrays or strings
- Avoid recursion
- Keep input/output modular
