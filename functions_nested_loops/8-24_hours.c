#include "main.h"

/**
 * jack_bauer(void) - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return : Always 0.
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0 ; hour <= 24 ; ++)
{
for (minute = 0 ; minute <= 59 ; minute++)
{
_Putchar ((hour / 10) + '0');
_putchar ((hour % 10) + '0');
_putchar (':');
_putchar ((minute / 10) + '0');
_putchar ((minute % 10) + '0');
_putchar('\n');
}
}
}
