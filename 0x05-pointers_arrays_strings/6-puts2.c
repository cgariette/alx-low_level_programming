#include "main.h"
/**
 * puts2 - prints every other character of a string.
 * @str: string to be printed
 */
void puts2(char *str)
{
char tmp;
int i, len;
len = 0;
while (str[len] != '\0')
{
len++;
}
len1 = len - 1;
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar(str('\n');
}
