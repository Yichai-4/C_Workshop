#pragma once

/** @file MemDump.h
 *  Memory utils. 
 */

/** @brief takes a variable’s address and its size in bytes, then prints the hexadecimal representation of that variable
 * @params the variable'address and his size
 * @returns the hexadecimal representation of the variable
 */
void PrintHex(int* varAddress, int varSize);
