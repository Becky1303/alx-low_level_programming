#include "main.h"

/**
* get_bit - gets bit at an index
* @j: number to be checked for index bit
* @index: bit index
* Return: 0 for success, -1 for error
*/
int get_bit(unsigned long int j, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((j & (1 << index)) == 0)
		return (0);

	return (1);
}
