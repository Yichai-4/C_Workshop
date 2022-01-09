#include <stdio.h>
#pragma once

/** @file Fibonacci_2.h
 *  Fibonacci_2 utils.
 */

/** @brief Calculates the fibonacci number at the number place, using lazy evaluation
 * @param number  the number which represents the place of the fibonacci number
 * @returns the corresponding fibonacci number
 */
long long int GetFibLazy(size_t number);
