#include "main.h"

/**
 * factorial - prints a factorial of a number
 * @n : the number
 * Return : factorial of a number
 */

int factorial(int n)
{
	int res = n;

	if (n <= 1)
	{
		return (1);
	}

	res = n *= factorial(n - 1);
	return (res);
}
