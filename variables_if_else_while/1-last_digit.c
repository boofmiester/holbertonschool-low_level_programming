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
if (lastdigit > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("the last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastdigit < 6 && lastdigit != 0);
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}

return (0);
}
