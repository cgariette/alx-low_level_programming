#include "main.h"
/**
 * actual_sqrt - recurses to find natural sqrt number.
 * @n: number to find sqrt of
 * @i: iterator
 *
 * Return: resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i ==  n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: given number
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
int actual_sqrt(int n, int i);
