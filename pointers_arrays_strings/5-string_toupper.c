#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @c: the string to convert.
 *
 * Return: poiinter to the converted string.
 */
char *string_toupper(char *)
{
int i;
for (i = 0; != '\0'; i++)
{
if (c[i] > 96 && c[i] < 123)
{
c[i] -= 32;
}
}
return (c);
}
