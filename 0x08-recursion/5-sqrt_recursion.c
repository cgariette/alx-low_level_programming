#include "main.h"
/**
 * act_sqrt - recurses to find the natural square root
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int act_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (act_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (act_sqrt(n, 0));
}
int act_sqrt(int n, int i);

