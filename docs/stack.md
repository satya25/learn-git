# 🧱 Stack CRUD: Student Record Manager

## 🎯 Objective
Implement a stack data structure in C to manage student records. Each record contains:
- Name (string)
- Section (char)
- USN (string)
- Grade (char)

## 🧠 Functional Requirements
- Create a new stack
- Push a student record onto the stack
- Pop the top record
- Peek at the top record without removing it
- Display all records
- Update a record by USN
- Delete a record by USN

## 🧪 Testing Goals
- Validate push/pop operations
- Ensure peek returns correct record
- Confirm update/delete work as expected

## 📂 File Mapping
- Implementation: `src/stack.c`
- Header: `include/stack.h`
- Tests: `tests/test_stack.c`

## 💡 Notes
- Use dynamic memory allocation
- Avoid global variables
- Follow modular coding practices
