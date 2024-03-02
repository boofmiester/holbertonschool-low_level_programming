#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*
 * strcat - function that concatenates two strings.
 * @dest: pointer to the string to be concatenated.
 * @src: string to be adjoined to dest.
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
