#include "main.h"
/**
 * print_numbers -  prints the numbers, 0-9
 *                  followed by a new line.
 *Return: Always 0.
 */
void print_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
