#include "main.h"

/**
 * print_line - prints a straight line
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (int a = 0; a < n; a++)
		{
			_putchar('95');
		}
	}
	else
	{
		_putchar(*"\n");
	}
}
