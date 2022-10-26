#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it
* @argc: number of arguments
* @argv: array pointer
* Description: prints number of arguments.
*
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int j;
	char *s = argv[0];

	s[0] = 'H';
	j = argc;
	j -= 1;
	printf("%d\n", j);
	return (0);
}
