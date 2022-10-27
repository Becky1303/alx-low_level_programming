#include "main.h"

/**
* get_endianness - checks the endianness
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
	unsigned int k = 1;
	char *ch = (char *)&k;

	if (*ch)
		return (1);
	return (0);
}
