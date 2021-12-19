#include <stdio.h>
#include "ReverseSentence.h"

int main(void)
{
    printf("Hello World!\n");

    char sentence[] = "Hello! How are you?";

    printf("%s\n", sentence);

    PrintSentenceReversed(sentence);

    return 0;
}
