#pragma once

/** @file MemDump.h
 *  Memory utils.
 *  
 *  @author Yichaï Hazan
 */

/** @brief takes a variable’s address and its size in bytes, then prints the hexadecimal representation of that variable
 *  @params the variable'address and its size
 *  @returns the hexadecimal representation of the variable
 */
void PrintHex(int *varAddress, int varSize);
