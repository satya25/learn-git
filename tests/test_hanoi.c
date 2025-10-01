/*
 * ============================================================================
 * File        : test_hanoi.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Minimal test driver for Tower of Hanoi module.
 *               Demonstrates recursive disk movement and traceable output.
 * ============================================================================
 */

#include <stdio.h>
#include "../include/hanoi.h"

int main() {
    int n = 3;  // Number of disks to move

    printf("🗼 Tower of Hanoi Test\n");
    printf("🎯 Moving %d disks from peg A to peg C using peg B\n\n", n);

    // Call the recursive Hanoi solver
    solveHanoi(n, 'A', 'C', 'B');

    return 0;
}
