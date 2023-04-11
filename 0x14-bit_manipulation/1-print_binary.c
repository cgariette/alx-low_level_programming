#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted.
 *
 */
void print_binary(unsigned long int n)
{
	long int t;
	int shift;

	if (n == 0)
	{
	printf("0");
	return;
	}
	/* Stores binary representation of number*/
	for (t = n, shift = 0; (t >>= 1) > 0; shift++)
	;
	/* Printing array in reverse order.*/
	for (; shift >= 0; shift--)
	{
	if ((n >> shift) & 1)
	printf("1");
	else
		printf("0");
}
}
