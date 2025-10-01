/*
 * ============================================================================
 * File        : expression.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Implements infix ↔ postfix conversion using stack logic.
 *               Includes helper functions for precedence and classification.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "expression.h"

// Internal stack for operators (used in infix to postfix)
char opStack[MAX_EXPR_LEN];
int top = -1;

/*
 * Function: precedence
 * --------------------
 * Returns the precedence level of an operator.
 * Higher number means higher precedence.
 */
int precedence(char op) {
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

/*
 * Function: isOperator
 * --------------------
 * Returns 1 if the character is an operator, 0 otherwise.
 */
int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

/*
 * Function: isOperand
 * -------------------
 * Returns 1 if the character is an operand (letter or digit), 0 otherwise.
 */
int isOperand(char ch) {
    return isalnum(ch);
}

/*
 * Function: push
 * --------------
 * Pushes a character onto the operator stack.
 */
void push(char ch) {
    if (top < MAX_EXPR_LEN - 1) {
        opStack[++top] = ch;
    }
}

/*
 * Function: pop
 * -------------
 * Pops and returns the top character from the operator stack.
 */
char pop() {
    if (top >= 0) {
        return opStack[top--];
    }
    return '\0';
}

/*
 * Function: peek
 * --------------
 * Returns the top character of the stack without removing it.
 */
char peek() {
    if (top >= 0) {
        return opStack[top];
    }
    return '\0';
}

/*
 * Function: infixToPostfix
 * ------------------------
 * Converts an infix expression to postfix using operator precedence.
 */
void infixToPostfix(const char *infix, char *postfix) {
    int i = 0, j = 0;
    char ch;

    top = -1;  // Reset stack

    while ((ch = infix[i++]) != '\0') {
        if (isOperand(ch)) {
            postfix[j++] = ch;  // Directly add operands
        } else if (ch == '(') {
            push(ch);  // Push opening parenthesis
        } else if (ch == ')') {
            // Pop until matching '('
            while (top >= 0 && peek() != '(') {
                postfix[j++] = pop();
            }
            pop();  // Remove '('
        } else if (isOperator(ch)) {
            // Pop operators with higher or equal precedence
            while (top >= 0 && precedence(peek()) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining operators
    while (top >= 0) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';  // Null-terminate result
}

/*
 * Function: postfixToInfix
 * ------------------------
 * Converts a postfix expression to infix using operand stack.
 * Note: This uses a string stack for intermediate expressions.
 */
void postfixToInfix(const char *postfix, char *infix) {
    char exprStack[MAX_EXPR_LEN][MAX_EXPR_LEN];
    int exprTop = -1;
    int i = 0;
    char ch;

    while ((ch = postfix[i++]) != '\0') {
        if (isOperand(ch)) {
            // Push operand as string
            char temp[2] = {ch, '\0'};
            strcpy(exprStack[++exprTop], temp);
        } else if (isOperator(ch)) {
            // Pop two operands
            if (exprTop < 1) {
                strcpy(infix, "Invalid postfix expression");
                return;
            }

            char right[MAX_EXPR_LEN], left[MAX_EXPR_LEN], combined[MAX_EXPR_LEN];
            strcpy(right, exprStack[exprTop--]);
            strcpy(left, exprStack[exprTop--]);

            // Combine into infix format
            snprintf(combined, sizeof(combined), "(%s%c%s)", left, ch, right);
            strcpy(exprStack[++exprTop], combined);
        }
    }

    // Final result
    if (exprTop == 0) {
        strcpy(infix, exprStack[exprTop]);
    } else {
        strcpy(infix, "Invalid postfix expression");
    }
}
