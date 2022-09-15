#include "main.h"
#include <stdio.h>

/**
* main - prints the numbers from 1 to 100
*
* Description: function prints the numbers from 1 to 100
* for multiples of three, print Fizz
* for multiples of five, print Buzz
* For multiples of both three and five print FizzBuzz.
*
* Return: Always 0.
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
		printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
