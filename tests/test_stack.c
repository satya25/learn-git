/*
 * ============================================================================
 * File        : test_stack.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Minimal test driver for stack module.
 * ============================================================================
 */

#include <stdio.h>
#include "../include/stack.h"

int main() {
    Stack s;
    initStack(&s);

    Student st1 = {"Alice", 'A', "1BM21CS001", 'A'};
    Student st2 = {"Bob", 'B', "1BM21CS002", 'B'};

    push(&s, st1);
    push(&s, st2);

    printf("✅ Stack after pushing 2 students:\n");
    display(&s);

    Student top = peek(&s);
    printf("👀 Top student: %s (%s)\n", top.name, top.usn);

    pop(&s);
    printf("🧹 Stack after popping one student:\n");
    display(&s);

    return 0;
}
