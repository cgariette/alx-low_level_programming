#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chartType;
int intType;
int longInt;
long longlongInt;
float float1;

/*Sizeof evaluates the size of a variable*/
printf("Size of a char: ", sizeof(charType));
printf("Size of an int: ", sizeof(intType));
printf("Size of a long int: ", sizeof(longInt));
printf("Size of a long long int: ", sizeof(charType));
printf("Size of a float: ", sizeof(float1));
return (0);
}
