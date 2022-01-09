#pragma once

/** @file MoreWarmup.h
 *  MoreWarmup utilities
 */

 /** @brief Checks if the user input isn't 'Q' or 'q'
  *
  * @param userInput  the char entered by the user
  * @returns  0 if need to quit, otherwise 1
  */
int ShouldContinue(char userInput);