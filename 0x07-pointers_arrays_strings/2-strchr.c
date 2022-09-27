#include "main.h"

/**
* _strchr - locates a character in a string
*  @s: string
*  @c: search character
*  Return: character
*/
char *_strchr(char *s, char c)
{
	int z = 0;

	while (*(s + z) != '\0')
	{
		if (c == *(s + z))
			return (s);
		s++;
	}
	if (c == *(s + z))
		return (s);
	return ('\0');
}
