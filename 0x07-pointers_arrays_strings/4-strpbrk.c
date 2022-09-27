#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes
*  @s: string
*  @accept: search character
*  Return: a character
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *pt;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				pt = &s[x];
				return (pt);
			}
			y++;
		}
		x++;
	}
	return (0);
}
