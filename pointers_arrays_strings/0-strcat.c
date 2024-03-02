#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _ strcat - function that concatenates two strings.
 * @dest: pointer to the string to be concatenated.
 * @src: string to be adjoined to dest.
 * Return: resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i, c;
for (i = 0; dest[i] != '\0'; i++)
;
for (c = 0; src[c] != '\0'; c++)
{
dest[i] = src[c];
i++;
}
dest[i] = '\0';
return (dest);
}
