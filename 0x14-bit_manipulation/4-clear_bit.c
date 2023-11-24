#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index
 * @n: the given number
 *
 * Return: 1 if successful, 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int temp;

	if (index > 64)
		return (-1);
	temp = index;

	for (num = 1; temp > 0; temp--, num = num * 2)
		;
	if ((*n >> index) & 1)
	*n -= num;

	return (1);
}
