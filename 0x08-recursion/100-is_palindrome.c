#include "main.h"
/**
* _strlen_recursion - that returns 1 if a string is a palindrome and 0 if not
* @s: string
* Return: int
*/
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}

/**
* helper - check whther palindrome or not
* @str: string to check
* @i: beginning of string
* @j: end of string
*
* Return: 1 if palindrome, 0 if not
*/
int helper(char *str, int i, int j)
{
	if (i >= j)
		return (1);
	if (str[i] != str[j])
		return (0);
	return (helper(str, i + 1, j - 1));
}

/**
* is_palindrome - checks if palindrome
* @s: string to be checked
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int i = 0;

	i = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);
	return (helper(s, 0, i));
}
