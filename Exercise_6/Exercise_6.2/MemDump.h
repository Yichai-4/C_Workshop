#pragma once

/** @file MemDump.h
 *  Memory utils.
 *  
 *  @author Yichaï Hazan
 */

/** @brief Takes a variable’s address and its size in bytes, then prints the hexadecimal representation of that variable
 *  @param *varAddress  the variable address
 *  @param varSize  the variable size
 *  @returns the hexadecimal representation of the variable
 */
void PrintHex(int *varAddress, int varSize);
