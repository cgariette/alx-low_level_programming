#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet -prints the alphabet in lowercase, followed by a new line.
*/
void print_alphabet(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);
putchar('\n');
}

