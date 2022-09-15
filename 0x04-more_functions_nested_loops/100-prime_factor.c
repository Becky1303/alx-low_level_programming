#include <stdio.h>

/**
* main - finds and prints the largest prime factor of
* 		 612852475143
*
*
* Description: Print prime factor
*
* Return: 0
*/

int main(void)
{
	long int x = 612852475143;
	long int y = 2;

	while (x != y)
	{
		if (x % y == 0)
		{
			x = (x / y);
		}
		else
		{
			y++;
		}
	}

	printf("%li\n", x);

	return (0);
}
