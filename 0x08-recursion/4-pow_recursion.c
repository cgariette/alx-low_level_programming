#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the number
 * @y: the power
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	/*base case*/
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
			return (x * _pow_recursion(x, y - 1));
}
