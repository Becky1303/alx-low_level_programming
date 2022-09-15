#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: is an integer.
*
* Description: checks if an int is a digit from 0
* to 9
*
* Return: returns 1 if a digit and 0 if otherwise
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
		return (0);
}
