#include "main.h"

/**
* _strcmp - compares two strings
*
* @s1: first string
* @s2: second string
*
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{
	int t, val;

	for (t = 0; (s1[t] != '\0' || s2[t] != '\0'); t++)
	{
		if (s1[t] != s2[t])
		{
			val = s1[t] - s2[t];
			break;
		}
		else if (s1[t] == s2[t])
		{
			val = 0;
		}
	}
	return (val);
	_putchar('\n');
}
