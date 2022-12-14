#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns x raised to the power of y
 * @x : the number
 * @y : raised to this number
 * Return: result if y > 0 or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int s = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	s *= _pow_recursion(x, y - 1);

	return (s);
}
