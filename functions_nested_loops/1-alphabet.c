#include <stdio.h>
#include "main.h"
/**
* description: print_alphabet-prints the alphabet, in lowercase
*
* Return:0
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
