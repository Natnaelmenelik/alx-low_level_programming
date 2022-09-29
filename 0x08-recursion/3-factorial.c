#include "main.h"

/**
 * factorial - prints a factorial of a number
 * @n : the number
 * Return : 0 or -1
 */

int factorial(int n)
{
	int res = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	res = n *= factorial(n - 1);
	return (res);
}
