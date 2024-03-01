#include "main.h"
#include <stdio.h>

/**
 * *_strcpy(char *dest, char *src) - function that copies the string
 *                                   pointed to by src,
 *                                   including the terminating null byte (\0),
 *                                   to the buffer pointed to by dest.
 * @dest: destination buffer where string will be copied;
 * @src: the source to copy
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index] != '\0')
{
dest[index] = src[index];
index++;
}
dest[index] = ('\0');
return (dest);
}
