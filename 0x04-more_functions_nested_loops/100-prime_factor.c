#include <stdio.h>

/**
* main - finds and prints largest prime factor
* 		 612852475143
*
* Description: Print prime factor
*
* Return: Always 0.
*/

int main(void)
{
	long int i = 612852475143;
	long int j = 2;

	while (i != j)
	{
		if (i % j != 0)
		{
			j++;
		}
		else
		{
			i = (i / j);
		}
	}

	printf("%li\n", i);

	return (0);
}
