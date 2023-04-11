#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @index: index from 0
 * @n: the pointer to the number
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int num;

	if (index > 64)
	{
		return (-1);
	}

	for (num = 1; index > 0; index--, num = num * 2)
		;
	*n = *n + num;

	return (1);
}
