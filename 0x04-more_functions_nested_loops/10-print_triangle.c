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
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar(*"#");
			}
		}
	}
	else
	{
		_putchar(*"\n");
	}
}
