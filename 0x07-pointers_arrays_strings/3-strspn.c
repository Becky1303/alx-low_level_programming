#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: match string
*
* Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				len += 1;
				break;
			}
			y++;
		}
		if (accept[y] == '\0')
			break;
		x++;
	}
	return (len);
}
