#include <stdio.h>
/**
 * main - program that prints either number or
 *            fizz, buzz or fizzBuzz
 *
 * Return: 0
 */
int main(void)
{
int i;
i = 1;
while (i <= 100)
{
if
(i % 5 == 0 && i % 3 == 0)
printf("FizzBuzz");
else if
(i % 3 == 0)
printf("Fizz");
else if
(i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if
(i != 100)
printf(" ");
i++;
}
printf("\n");
return (0);
}
