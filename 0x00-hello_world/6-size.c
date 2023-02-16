#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
int longInt;
long longlongInt;
float float1;

/*Sizeof evaluates the size of a variable*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongInt));
printf("Size of a float: %zu byte(s)\n", sizeof(float1));
return (0);
}
