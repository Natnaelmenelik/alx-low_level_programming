#include "main.h"

/**
 * print_square - prints a square
 * @size : parameter
 * Return: 0 or 1
 */

void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < (size - 1); wid++)
			{
				_putchar(*"#");
			}

			_putchar(*"#");
			_putchar(*"\n");
		}
	}
	else
	{
		_putchar(*"\n");
	}
}
