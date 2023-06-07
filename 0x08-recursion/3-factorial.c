#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the given number
 *
 * Return: -1 If n is lower than 0, the function should return
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
