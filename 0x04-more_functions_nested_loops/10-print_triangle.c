#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : parameter
 * Return: void
 */

void print_triangle(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for ((wid = size - len); wid > 0; wid--)
			{
				_putchar(*" ");
			}
			for (wid = 0; wid < len; wid++)
			{
				_putchar(*"#");
			}
			if (len == size)
			{
				continue;
			}
			_putchar(*"\n");
		}
	}
	else 
	{
		_putchar(*"\n");
	}
}
