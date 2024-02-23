#include <stdio.h>
#include "main.h"
/**
 *  _islower : function that checks for lowercase character.
 * @c: the character
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
