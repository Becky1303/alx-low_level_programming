#include "main.h"

/**
* binary_to_uint - converts a string of
* binary characters to unsigned decimal int
* @t: binary string
* Return: converted number
*/
unsigned int binary_to_uint(const char *t)
{
	unsigned int power = 1, uint = 0, len = 0;

	if (t == NULL)
		return (0);

	while (t[len])
		len++;
	while (len)
	{
		if (t[len - 1] != '0' && t[len - 1] != '1')
			return (0);

		if (t[len - 1] == '1')
			uint += power;
		power *= 2;
		len--;
	}
	return (uint);
}
