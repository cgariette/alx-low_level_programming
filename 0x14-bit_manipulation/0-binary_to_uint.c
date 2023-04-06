#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string of characters
 *
 * Return: The converted number, or 0 if character in string is not 1 
 * or 0 or if string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int all = 0;
	int i, decimalValue = 1;

	if (b == NULL)
		return (0);

	/*Check if elements of string are not either 0 or 1*/
	for (length = 0; b[length]; length++)
	{
		if (b[length] != 0 && b[length] != 1)
		{
			return (0);
		}
	}
	/**
	 * 10101 binary ->
	 *
	 * 1	0	1	0	1
	 * 2^4	2^3	2^2	2^1	2^0
	 * 16	0	4	0	1
	 * =21
	 */

	for ( i = (length -1); i >= 0; i--)
	{
		if (b[i] == 1)
		{
			decimalValue *= 2;
			all += decimalValue;
		}
	}

	return (all);
}
