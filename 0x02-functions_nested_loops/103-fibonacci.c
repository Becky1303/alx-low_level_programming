#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* whose values do not exceed 4,000,000
*
* Description: finds and prints fibonacci numbers
* 
* Return: 0
*/
int main(void)
{
	long int sum;
	long int fib_num;
	long int a;
	long int b;

	sum = 0;
	fib_num = 0;
	a = 0;
	b = 1;

	while (fib_num < 4000000)
	{
		fib_num = a + b;
		if (fib_num % 2 == 0)
		{
			sum = (fib_num + sum);
		}
		a = b;
		b = fib_num;
	}

	printf("%li\n", sum);

	return (0);
}

