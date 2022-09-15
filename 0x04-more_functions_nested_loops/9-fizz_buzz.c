#include "main.h"
#include <stdio.h>

/**
* main - prints 1 to 100
* 		 prints Fizz for multiples of 3
*		 prints Buzz for multiples of 5
*		 prints FizzBuzz for multiples of 3 and 5
*
* Return: 0
*/

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 5 == 0 && k % 3 == 0)
			printf("FizzBuzz ");
		else if (k % 5 == 0)
			if (k == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (k % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", k);
	}
	printf("\k");

	return (0);
}
