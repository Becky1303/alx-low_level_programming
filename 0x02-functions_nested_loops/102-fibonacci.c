#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
*        starting with 1 and 2
*
* Description: prints the first 50 Fibonacci numbers
*
* Return: 0
*/

int main(void)
{
	long int fib_num;
	long int x;
	long int y;
	int counter;

	fib_num = 0;
	x = 0;
	y = 1;
	counter = 0;

	while (counter < 49)
	{
		fib_num  = x + y;
		printf("%li, ", fib_num);
		x = y;
		y = fib_num;

		counter++;
	}
	fib_num = x + y;
	printf("%li\n", fib_num);

	return (0);
}
