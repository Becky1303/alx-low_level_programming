#include "main.h"

/**
* set_bit - sets bit at an index to 1
* @j: number
* @index: bit index to  be changed
* Return: 1 for success and  -1 for failure
*/
int set_bit(unsigned long int *j, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*j ^= (1 << index);

	return (1);
}
