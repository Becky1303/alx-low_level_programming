#include "main.h"

/**
* set_bit - sets bit at an index to 1
* @j: number
* @index: bit index to  be changed
* Return: 1 for success and  -1 for failure
*/
int set_bit(unsigned long int *j, unsigned int index)
{
	unsigned long int limit = 0x01;

	limit <<= index;
	if (limit == 0)
		return (-1);
	*j |= limit;
	return (1);
}
