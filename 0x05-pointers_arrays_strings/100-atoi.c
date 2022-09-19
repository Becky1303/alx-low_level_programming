#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * _atoi - convert a string to an integer
 * @s: a string
 *
 * Return: Integer
 */
int _atoi(char *s)
{

	int k;
	int r = 0;
	int sign = -1;
	int b = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == '-')
			sign = sign * -1;
		if (s[k] >= '0' && s[k] <= '9')
		{
			r = r * 10;
			r -= (s[k] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}
	r = sign * r;
	return (r);
}
