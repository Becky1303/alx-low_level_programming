#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: destination string
 * @src: target string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int k, t, z;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	z = i;
	t = 0;
	while (src[t] != '\0')
	{
		dest[z] = src[j];
		t++;
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
