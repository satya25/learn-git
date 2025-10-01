/*
 * ============================================================================
 * File        : test_expression.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Minimal test driver for infix ↔ postfix conversion module.
 * ============================================================================
 */

#include <stdio.h>
#include "../include/expression.h"

int main() {
    char infix[MAX_EXPR_LEN] = "A+B*C";
    char postfix[MAX_EXPR_LEN];
    char reconverted[MAX_EXPR_LEN];

    printf("🧪 Original Infix Expression: %s\n", infix);

    // Convert infix to postfix
    infixToPostfix(infix, postfix);
    printf("🔄 Converted to Postfix: %s\n", postfix);

    // Convert postfix back to infix
    postfixToInfix(postfix, reconverted);
    printf("🔁 Reconverted to Infix: %s\n", reconverted);

    return 0;
}
