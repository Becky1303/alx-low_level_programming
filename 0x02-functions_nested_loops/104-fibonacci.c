#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers
*        starting with 1 and 2
*
* Return: 0
*/
int main(void)
{	
	unsigned long int a, a_1, a_2, b, b_1, b_2, c, c_1, c_2, d, e;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (d = 3; d < 89; d++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	b_1 = b / 1000000000;
	b_2 = b % 1000000000;
	c_1 = c / 1000000000;
	c_2 = c % 1000000000;
	for (e = 89; e < 98; e++)
	{
		printf("%lu%lu, ", c_1, c_2);
		a_1 = b_1;
		a_2 = b_2;
		b_1 = c_1;
		b_2 = c_2;
		c_1 = a_1 + b_1 + ((a_2 + b_2) / 1000000000);
		c_2 = (a_2 + b_2) % 1000000000;
	}
	printf("%lu%lu\n", c_1, c_2);
	return (0);
}
