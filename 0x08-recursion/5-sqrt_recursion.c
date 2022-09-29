#include "main.h"
#include <stdio.h>
#include <math.h>

int square(int num, int root);

/**
 * square - returns a square root of a number
 * @num : the number
 * @root : square root of a number
 * Return: sqaure root of a number or -1
 */
int square(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if ((root == num / 2))
	{
		return (-1);
	}

	return (square(num, root + 1));
}

/**
 * _sqrt_recursion - returns a square root of a number
 * @n : the number
 * Return: sqaure root of a number or -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (square(n, root));
}
