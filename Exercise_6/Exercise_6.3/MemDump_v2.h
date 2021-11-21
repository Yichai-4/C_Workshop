#pragma once

/** @file MemDump_v2.h
 *  MemDump_v2 utilities.
 */

/** @brief takes a variable’s address and its size in bytes, and then prints the binary representation of that variable.
 *  @params the variable'address and its size
 *  @returns the binary representation of the variable
 */
void PrintBin(int *varAddress, int varSize);
