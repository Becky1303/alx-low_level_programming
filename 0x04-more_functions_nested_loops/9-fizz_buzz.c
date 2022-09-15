#include "main.h"
#include <stdio.h>

/**
* main - prints 1 to 100
* 
* Description: prints FizzBuzz for multiples of 3 and 5
*
* Return: 0
*/

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			if (k % 3 == 0)
			{
				printf("Fizz");
			}
			if (k % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", k);
		}
		if (k != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
