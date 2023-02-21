#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * @x & @y: hours and minutes
 *
 */
void jack_bauer(void)
{
int hr, min;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
