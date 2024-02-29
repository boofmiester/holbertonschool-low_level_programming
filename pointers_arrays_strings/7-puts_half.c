#include "main.h"
/**
 * puts_half(char *str) - prints half of a string,
 *                        followed by a new line.
 * @str: char array string
 * Description: if character is odd it prints lenght
 *              if not by half.
 */

void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
