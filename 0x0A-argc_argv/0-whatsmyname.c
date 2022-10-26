#include <stdio.h>
#include "main.h"

/**
* main - prints its name, followed by a new line
* @argc: number of arguments
* @argv: array pointer
*
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int j = argc;

	j += 1;
	printf("%s\n", argv[0]);
	return (0);
}
