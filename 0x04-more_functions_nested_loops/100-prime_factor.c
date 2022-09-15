#include <stdio.h>

/**
* main - finds and prints largest prime factor
* 		 612852475143
*
* Description: Print prime factor
*
* Return: void
*/

int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
