#include "main.h"

/**
 *  swap_int - swaps values of two integers
 * @a : parameter 1
 * @b : parameter 2
 * Return: 0 or 1
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
