#include "main.h"

/**
* _strlen - returns the length of a string
* @t: pointer
*
* Return: Integer
*/
int _strlen(char *t)
{
	int n;
	int len;

	n = 0;
	while (t[n] != '\0')
	{
		n++;
	}
	len = n;
	return (len);
}
