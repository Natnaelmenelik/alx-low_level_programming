#include "main.h"
#include <stdio.h>
#include <math.h>

int square(int num, int root);

/**
 * _sqrt_recursion - returns a square root of a number
 * @n : the number
 * Return: sqaure root of a number or -1
 */
int square(int num, int root)
{
	root = sqrt(num);
}

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

	return (square(n, root));
}
