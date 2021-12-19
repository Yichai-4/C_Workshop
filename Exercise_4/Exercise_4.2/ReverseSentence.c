#include "ReverseSentence.h"
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size


void PrintSentenceReversed(char sentence[])
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int len, i, index, wordStart, wordEnd;

    len = strlen(sentence);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd = len - 1;

    while (wordStart > 0)
    {
        // If a word is found
        if (sentence[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                reverse[index] = sentence[i];

                ++i;
                ++index;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        --wordStart;
    }

    // Finally add the last word
    for (i = 0; i <= wordEnd; ++i)
    {
        reverse[index] = sentence[i];
        ++index;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0';

    printf("%s", reverse);
}




/* Idea 1: Take each word an put it in array; then print the array in the reverse order
*
*  Idea 2: Reverse all the sentence with the characters; then reverse each word
*/
char* ReverseString(char string[])
{
    size_t stringLength = strlen(string);
    char newString[MAX_SIZE];
    int j = 0;
    for (int i = stringLength - 1; i >= 0; --i, ++j)
    {
        newString[j] = string[i];
    }
    newString[j] = '\0';

    return newString;
}

void PrintSentenceReversed_v2(char sentence[])
{
    char* newSentence = ReverseString(sentence);
    char word[MAX_SIZE];

    for (size_t i = 0, j = 0; i < strlen(newSentence); ++i, ++j)
    {
        if (newSentence[i] == ' ')
        {
            word[j] = '\0';
            ++i;
            char* reversedWord = ReverseString(word);
            printf("%s", reversedWord);
            printf(" ");
            j = 0;
        }
        word[j] = newSentence[i];
    }
}