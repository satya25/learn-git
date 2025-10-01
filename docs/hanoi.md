# 🗼 Tower of Hanoi: Recursive Disk Mover

## 🎯 Objective
Implement the classic Tower of Hanoi problem using recursion in C.

## 🧠 Functional Requirements
- Accept number of disks (n)
- Display step-by-step moves from source to destination
- Use three pegs: Source, Auxiliary, Destination

## 🧪 Testing Goals
- Validate move count: \( 2^n - 1 \)
- Confirm correct sequence of moves
- Handle edge cases (n = 0, n = 1)

## 📂 File Mapping
- Implementation: `src/hanoi.c`
- Header: `include/hanoi.h`
- Tests: `tests/test_hanoi.c`

## 💡 Notes
- Use recursion only
- Display moves in readable format
- No need for graphical output
