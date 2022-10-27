#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @j: number
* @index: bit index
* Return: 1 for success and -1 for failure
*/
int clear_bit(unsigned long int *j, unsigned int index)
{
	unsigned long int reducer = 0x01;

	reducer = ~(reducer << index);
	if (reducer == 0x00)
		return (-1);
	*j &= reducer;
	return (1);
}
