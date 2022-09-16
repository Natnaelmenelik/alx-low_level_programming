#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n : used as parameter
 * Return : 0 or 1
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(*" ");
		}
		_putchar(*"\\");

		if (a == (n - 1))
		{
			continue;
		}
		_putchar("\n");
	}
	else
	{
		_putchar("\n");
	}
}
