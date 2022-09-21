#include "main.h"

/**
* cap_string - capitalizes all the words of a string
*
* @c: pointer to a string
*
* Return: char
*/
char *cap_string(char *c)
{
	int h;

	for (h = 0; c[h] != '\0'; h++)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		else if (c[h] >= 9 && c[h] <= 11)
		{
			if (c[h + 1] >= 97 && c[h + 1] <= 122)
				c[h + 1] -= 32;
		}
		else if (c[h] >= 32 && c[h] <= 47)
		{
			if ((c[h + 1] >= 'a' && c[h + 1] <= 'z') && c[h] != 45)
			c[h + 1] -= 32;
		}
		else if (c[h] >= 58 && c[h] <= 63)
		{
			if (c[h + 1] >= 97 && c[h + 1] <= 122)
				c[h + 1] -= 32;
		}
		else if (c[h] >= 123 && c[h] <= 125)
		{
			if (c[h + 1] >= 'a' && c[h + 1] <= 'z')
				c[h + 1] -= 32;
		}
	}
	return (c);
	_putchar('\n');
}
