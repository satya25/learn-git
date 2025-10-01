/*
 * ============================================================================
 * File        : stack.h
 * Author      : Prof. Satya Prakash Nigam
 * Description : Header file for implementing a stack of student records in C.
 *               This file defines the data structures and function prototypes
 *               used in stack operations such as push, pop, peek, display,
 *               update, and delete.
 * ============================================================================
 */

#ifndef STACK_H
#define STACK_H

// Maximum allowed characters for student name and USN
#define MAX_NAME_LEN 50
#define MAX_USN_LEN 15

// Maximum number of students the stack can hold
#define MAX_SIZE 100

/*
 * Structure: Student
 * ------------------
 * Represents a student with basic academic details.
 */
typedef struct {
    char name[MAX_NAME_LEN];  // Student's full name
    char section;             // Section (e.g., 'A', 'B')
    char usn[MAX_USN_LEN];    // Unique Student Number
    char grade;               // Grade (e.g., 'A', 'B', 'C')
} Student;

/*
 * Structure: Stack
 * ----------------
 * Represents a stack of Student records.
 */
typedef struct {
    Student items[MAX_SIZE];  // Array to hold student records
    int top;                  // Index of the top element
} Stack;

/* Function Prototypes */

// Initializes the stack by setting top to -1
void initStack(Stack *s);

// Checks if the stack is empty
int isEmpty(Stack *s);

// Checks if the stack is full
int isFull(Stack *s);

// Pushes a student record onto the stack
void push(Stack *s, Student st);

// Pops the top student record from the stack
Student pop(Stack *s);

// Returns the top student record without removing it
Student peek(Stack *s);

// Displays all student records in the stack
void display(Stack *s);

// Updates a student record by matching USN
int updateByUSN(Stack *s, const char *usn, Student updated);

// Deletes a student record by matching USN
int deleteByUSN(Stack *s, const char *usn);

#endif // STACK_H
