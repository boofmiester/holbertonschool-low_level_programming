#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: The numbers should be displayed in the
 *              same order as they are stored in the array
 *              You are allowed to use printf.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
  printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
