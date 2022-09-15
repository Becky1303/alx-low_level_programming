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

	for (k = 1; k < 101; k++)
	{
		if (k % 5 == 0 && k % 3 == 0)
			 _putchar("FizzBuzz ");
		else if (k % 5 == 0)
			if (k == 100)
				 _putchar("Buzz");
			else
				 _putchar("Buzz ");
		else if (k % 3 == 0)
			 _putchar("Fizz ");
		else
			 _putchar("%d ", k);
	}
	 _putchar("\n");

	return (0);
}
