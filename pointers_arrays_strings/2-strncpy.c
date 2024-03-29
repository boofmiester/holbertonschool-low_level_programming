#include "main.h"
/**
 * _strncpy - copy of string from index 0 of dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; n > i; i++)
dest[i] = '\0';
return (dest);
}
