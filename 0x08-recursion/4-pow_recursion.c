#include "main.h"

/**
* _pow_recursion - returns the value of x
* raised to the power of y
* @x: base
* @y: exponent
* Return: int
*/
int _pow_recursion(int x, int y)
{
	int ans;

	if (y == 0)
		ans =  (1);
	else if (y < 0)
		ans = (-1);
	else if (y > 0)
	{
		ans =  (x * _pow_recursion(x, (y - 1)));
	}
	return (ans);
}
