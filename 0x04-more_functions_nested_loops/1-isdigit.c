#include "main.h"
/**
 * _isdigit - Checks for a digit.
 * @c: The digit to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
*/
int _isdigit(int c)
{
c = 0;
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
