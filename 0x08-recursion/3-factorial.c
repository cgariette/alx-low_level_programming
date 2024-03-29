#include "main.h"

/**
 * factorial - returns factorial of a given number.
 * @n: given number
 *
 * Return: -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
