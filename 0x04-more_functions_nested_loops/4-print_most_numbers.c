#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
char c = '0';
while (c <= '9')
{
if (c != '2' && c != '4')
{
_putchar(c);
}
c++;
}
_putchar('\n');
}
