/*
 * ============================================================================
 * File        : stack.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Implementation of stack operations for managing student records.
 *               Includes push, pop, peek, display, update, and delete functions.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include "stack.h"

/*
 * Function: initStack
 * -------------------
 * Initializes the stack by setting the top index to -1.
 */
void initStack(Stack *s) {
    s->top = -1;
}

/*
 * Function: isEmpty
 * -----------------
 * Returns 1 if the stack is empty, 0 otherwise.
 */
int isEmpty(Stack *s) {
    return s->top == -1;
}

/*
 * Function: isFull
 * ----------------
 * Returns 1 if the stack is full, 0 otherwise.
 */
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

/*
 * Function: push
 * --------------
 * Adds a student record to the top of the stack.
 * If the stack is full, prints an error message.
 */
void push(Stack *s, Student st) {
    if (isFull(s)) {
        printf("⚠️ Stack is full. Cannot push new record.\n");
        return;
    }
    s->items[++s->top] = st;
}

/*
 * Function: pop
 * -------------
 * Removes and returns the top student record from the stack.
 * If the stack is empty, returns a dummy student and prints an error.
 */
Student pop(Stack *s) {
    Student dummy = {"", 'X', "", 'F'};  // Default fallback student
    if (isEmpty(s)) {
        printf("⚠️ Stack is empty. Cannot pop.\n");
        return dummy;
    }
    return s->items[s->top--];
}

/*
 * Function: peek
 * --------------
 * Returns the top student record without removing it.
 * If the stack is empty, returns a dummy student.
 */
Student peek(Stack *s) {
    Student dummy = {"", 'X', "", 'F'};
    if (isEmpty(s)) {
        printf("⚠️ Stack is empty. Nothing to peek.\n");
        return dummy;
    }
    return s->items[s->top];
}

/*
 * Function: display
 * -----------------
 * Prints all student records from top to bottom.
 */
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("📭 Stack is empty. No records to display.\n");
        return;
    }

    printf("📋 Student Records in Stack:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("  [%d] Name: %s | Section: %c | USN: %s | Grade: %c\n",
               i, s->items[i].name, s->items[i].section,
               s->items[i].usn, s->items[i].grade);
    }
}

/*
 * Function: updateByUSN
 * ---------------------
 * Searches for a student by USN and updates their record.
 * Returns 1 if successful, 0 if not found.
 */
int updateByUSN(Stack *s, const char *usn, Student updated) {
    for (int i = s->top; i >= 0; i--) {
        if (strcmp(s->items[i].usn, usn) == 0) {
            s->items[i] = updated;
            return 1;
        }
    }
    return 0;
}

/*
 * Function: deleteByUSN
 * ---------------------
 * Deletes a student record by USN.
 * Uses a temporary stack to preserve order.
 * Returns 1 if deletion was successful, 0 if not found.
 */
int deleteByUSN(Stack *s, const char *usn) {
    int found = 0;
    Stack temp;
    initStack(&temp);

    // Transfer all items except the one to delete
    while (!isEmpty(s)) {
        Student st = pop(s);
        if (strcmp(st.usn, usn) == 0) {
            found = 1;  // Skip this record
            continue;
        }
        push(&temp, st);
    }

    // Restore original stack from temp
    while (!isEmpty(&temp)) {
        push(s, pop(&temp));
    }

    return found;
}
