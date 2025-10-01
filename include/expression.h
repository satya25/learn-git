/*
 * ============================================================================
 * File        : expression.h
 * Author      : Prof. Satya Prakash Nigam
 * Description : Header file for stack-based expression conversion in C.
 *               Supports infix to postfix and postfix to infix workflows.
 * ============================================================================
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

#define MAX_EXPR_LEN 100  // Maximum length of input expression

/*
 * Function Prototypes
 */

// Converts an infix expression to postfix
void infixToPostfix(const char *infix, char *postfix);

// Converts a postfix expression to infix
void postfixToInfix(const char *postfix, char *infix);

// Utility: Returns precedence of an operator
int precedence(char op);

// Utility: Checks if a character is an operator
int isOperator(char ch);

// Utility: Checks if a character is an operand (A-Z, a-z, 0-9)
int isOperand(char ch);

#endif // EXPRESSION_H
