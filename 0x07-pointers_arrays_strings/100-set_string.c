#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to a pointer of type char
 * @to: pointer to a character
 */

void set_string(char **s, char *to)
{
		*s = &*to;
}
