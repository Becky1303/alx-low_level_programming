#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @j: number to be flopped
* @k: prints the value of
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int j, unsigned long int k)
{
	unsigned long int xor = j ^ k, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
