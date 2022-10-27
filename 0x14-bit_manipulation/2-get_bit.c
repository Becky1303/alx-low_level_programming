#include "main.h"

/**
* get_bit - gets bit at an index
* @j: number to be checked for index bit
* @index: bit index
* Return: 0 (success), -1 (error)
*/
int get_bit(unsigned long int j, unsigned int index)
{
	unsigned long int limit = 0x01;

	limit <<= index;
	if (limit == 0)
		return (-1);

	if ((j & limit))
		return (1);
	else
		return (0);
}
