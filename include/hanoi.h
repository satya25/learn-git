/*
 * ============================================================================
 * File        : hanoi.h
 * Author      : Prof. Satya Prakash Nigam
 * Description : Header file for solving the Tower of Hanoi problem using recursion.
 *               This module helps students understand recursive logic and traceable output.
 * ============================================================================
 */

#ifndef HANOI_H
#define HANOI_H

/*
 * Function: solveHanoi
 * --------------------
 * Recursively solves the Tower of Hanoi problem.
 *
 * Parameters:
 *   n     - Number of disks to move
 *   from  - Source peg label (e.g., 'A')
 *   to    - Destination peg label (e.g., 'C')
 *   aux   - Auxiliary peg label (e.g., 'B')
 *
 * Returns:
 *   void - Prints each move to stdout
 */
void solveHanoi(int n, char from, char to, char aux);

#endif // HANOI_H
