/**
* string_toupper - changes all lowercase letters
* of a string to uppercase
* @a: pointer
*
* Return: character
*/
char *string_toupper(char *a)
{
	int k;

	k = 0;
	while (a[k] != '\0')
	{
		if (a[k] >= 97 && a[k] <= 122)
			a[k] = a[k] - 32;
		k++;
	}
	return (a);
}
