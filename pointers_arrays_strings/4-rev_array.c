#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array
 * @n: the number of elemens in the array
 *
 */
void reverse_array(int *a, int n)
{
int i;
int h;
for (i = 0; i < (n / 2); i++)
{
h = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = h;
}
}
