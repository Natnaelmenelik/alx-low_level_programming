#include "main.h"

/**
 * more_numbers - prints number 14x
 * Return: 0
 */

void more_numbers(void)
{
	int n = 0;
	int c = 0;

	while (n < 9)
	{
		for (c = 0; c < 14; c++)
		{
			_putchar('n' + c);
		}
		n++;
		_putchar(*"/n");
	}
}

