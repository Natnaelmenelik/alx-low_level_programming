#include "main.h"

/**
 * more_numbers - prints number 14x
 * Return: 0
 */

void more_numbers(void)
{
	int n = 0;
	int c = 0;

	while (n < 10)
	{
		for (c = 0; c < 15; c++)
		{
			c = n;
			if (n > 9)
			{

				_putchar(*'1');
				c = n % 10;

			}

			_putchar("0" + c);
		}
		
		_putchar(*"\n");
		n++;
	}
}

