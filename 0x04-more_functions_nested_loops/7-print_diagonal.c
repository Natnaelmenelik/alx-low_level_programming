#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n : used as parameter
 * Return : 0 or 1
 */

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(*' ');
			}
			_putchar(*'\\');

			if (length == (n - 1))
			{
				continue;
			}
			_putchar(*'\n');
		}
	}
		_putchar(*'\n');

}
