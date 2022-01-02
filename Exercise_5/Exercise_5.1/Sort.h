#pragma once
#include <stdio.h>

/** @file Sort.h
 *  Sorting utilities
 * 
 *  @author Yichaï Hazan
 */

/** @brief A struct which represents a dog
 *  The name is struct Dog_t and the alias is simply Dog
 *
 */
typedef struct Dog_t Dog;

/** @brief Receives an array of dogs and sorts them by their name
 * 
 *  @param A struct array of dogs and his length
 */
void SortByName(Dog *dogs, size_t dogsLength);

/** @brief Receives an array of dogs and sorts them by their weight
 *
 *  @param A struct array of dogs and his length
 */
void SortByWeight(Dog *dogs, size_t dogsLength);