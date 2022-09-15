#include "main.h"

/**
* _isupper - checks for uppercase character
* @m: is a variable
*
* Description: Checks if a character is in uppercase
*
* Return: 1 for uppercase
*		  0 for lowercase
*/

int _isupper(int m)
{
	if (m >= 'A' && m <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
