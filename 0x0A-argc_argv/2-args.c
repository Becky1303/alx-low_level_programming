#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc: number of arguments
* @argv: array pointer
* Description: lists arguments supplied, first one included.
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int j = argc;

	j -= 1;
	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
