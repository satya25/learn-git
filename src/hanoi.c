/*
 * ============================================================================
 * File        : hanoi.c
 * Author      : Prof. Satya Prakash Nigam
 * Description : Recursive implementation of the Tower of Hanoi problem.
 *               Demonstrates divide-and-conquer strategy and traceable recursion.
 * ============================================================================
 */

#include <stdio.h>
#include "hanoi.h"

/*
 * Function: solveHanoi
 * --------------------
 * Recursively moves 'n' disks from the source peg to the destination peg
 * using an auxiliary peg. Prints each move in readable format.
 *
 * Base Case:
 *   If n == 1, move the disk directly from source to destination.
 *
 * Recursive Case:
 *   1. Move n-1 disks from source to auxiliary.
 *   2. Move the nth disk from source to destination.
 *   3. Move n-1 disks from auxiliary to destination.
 */
void solveHanoi(int n, char from, char to, char aux) {
    if (n <= 0) {
        printf("⚠️ Invalid number of disks: %d\n", n);
        return;
    }

    if (n == 1) {
        // Base case: move one disk directly
        printf("🔁 Move disk 1 from %c to %c\n", from, to);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    solveHanoi(n - 1, from, aux, to);

    // Step 2: Move the nth disk from source to destination
    printf("🔁 Move disk %d from %c to %c\n", n, from, to);

    // Step 3: Move n-1 disks from auxiliary to destination
    solveHanoi(n - 1, aux, to, from);
}
