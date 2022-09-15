#include "main.h"

/**
 * more_numbers - prints number 14x
 * Return: 0
 */

void more_numbers(void)
{
	int n = 0;
	int c = 0;
	int d = 0;

	/*while (n < 10)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar('n' + c);
		}
		n++;
		_putchar(*"/n");
	} */
	for (d = 0; d < 10 ; d++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar('n' + c);
		}
		_putchar(*"/n");
	}
}

