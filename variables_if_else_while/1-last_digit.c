#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always (Success)
 */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("the last digit of %d is %d and is 0\n", n, n % 10);
}
else if (n % 10 < 6 && % 10 != 0)
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}

return (0);
}