#include "main.h"
/**
 * puts_half - prints half of a string,
 *             followed by a new line.
 * @str: char array string
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
