#include "main.h"

/**
 * @file prime.c
 * @author Your Name (replace with your name)
 * @brief Contains functions for checking prime numbers.
 * @version 0.1
 * @date 2024-03-19
 *
 * This file defines two functions:
 *  - checker: Recursively checks if a number is prime.
 *  - is_prime_number (not implemented here): Checks if a number is prime (implementation needed).
 */

/**
 * checker - Recursively checks if a number is a prime.
 *
 * This function is designed to work in conjunction with a function
 * named `is_prime_number` (which is not implemented here). The
 * `checker` function is called by `is_prime_number` and performs
 * a recursive check to determine if a number (`n`) is prime
 * relative to a given base (`base`).
 *
 * Note: The implementation assumes `is_prime_number` has already
 * handled base cases like negative numbers and 0/1.
 *
 * @param n: The number to be checked for primality (assumed to be
 *           greater than 1).
 * @param base: The base number to be used in the primality check.
 *
 * @return:
 *   - 1: If `n` is prime relative to `base`.
 *   - 0: Otherwise.
 */
int checker(int n, int base)
{
    if (base % n == 0 || base < 2) {
        return (0); // Not prime: base is divisible by n or base is less than 2
    } else if (n == base - 1) {
        return (1); // Prime: n is one less than the base
    } else if (base > n) {
        return (checker(n + 1, base)); // Recursive call for next number (n + 1)
    }
    return (1); // Should not be reached (handled by previous conditions)
}