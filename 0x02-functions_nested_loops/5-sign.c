#include "main.h"
/**
 *print_sign - prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 if character is positive, 0 if number is zero and -1 if number is negative.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
