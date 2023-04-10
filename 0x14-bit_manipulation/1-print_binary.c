#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted.
 *
 */
void print_binary(unsigned long int n)

	if (n == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}
