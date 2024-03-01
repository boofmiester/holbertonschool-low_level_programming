#include "main.h"
/**
 * puts_half(char *str) - prints half of a string,
 *                        followed by a new line.
 * @str: char array string
 * Description: if the lenght of the string is odd, it prints the
 *              2nd half.
 *              if the lenght is even, it prints the last half.
 */

void puts_half(char *str)
{
int i, length = 0;
while (str[length] != '\0')
{
length++;
}
for (i = (length + 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
