#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Description: generation of random passwords
 *
 * Return: 0 is success
 */
int main(void)
{

	int x, tot, n;
	int paswrd[100];

	tot = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		paswrd[x] = rand() % 78;
		tot = (tot + (paswrd[x] + '0'));
		putchar(paswrd[x] + '0');
		if ((2772 - tot) - '0' < 78)
		{
			n = 2772 - tot - '0';
			tot = (tot + n);
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

