#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: array pointer
* Description: adds positive numbers
*
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int tot = 0, x = 0;
	for (x = 0; x < argc; x++)
	{
		if (atoi(argv[x]) != 0 && argv[x] != 0)
		{
			tot += atoi(argv[x]);
			continue;
		}
	}
	if (argc < 2)
		printf("0\n");
	else
		printf("%d\n", tot);
	return (0);
}
