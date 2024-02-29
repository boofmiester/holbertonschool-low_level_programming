#include "main.h"
/**
 * _strlen(char *s) - returns the length of a string.
 * @s: pointer type
 * return: length of string
 */
int _strlen(char *s)
{
int c;
for (c = 0; s[c] != '\0'; c++)
;
return (c);
}
