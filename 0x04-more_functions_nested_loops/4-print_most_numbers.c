#include "main.h"

/**
 * print_most_numbers - prints the numbers excluding 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}

		c++;
	}
	_putchar(*"\n");
}
