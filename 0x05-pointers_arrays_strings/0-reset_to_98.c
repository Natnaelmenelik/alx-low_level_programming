#include "main.h"

/**
 * reset_to_98 - takes a pointer and updates its value to 98
 * @*n : parameter
 * Return: 0 or 1
 */

void reset_to_98(int *n)
{
	int *p;

	*p = &n;

	*p = 48;
}
