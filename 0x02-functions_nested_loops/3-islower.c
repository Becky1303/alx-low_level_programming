#include "main.h"

/**
* _islower - checks for lowercase character
*
* Description: checks for lowercase character
*@c: this is the var
* Return: 1 if it is lowercase. 0 if not
*/

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
