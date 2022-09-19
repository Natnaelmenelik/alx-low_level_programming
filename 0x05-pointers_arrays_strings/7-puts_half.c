#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str : parameter
 * Return: 0 or 1
 */

void puts_half(char *str)
{
	unsigned int n, half;

	n = (strlen(str) - 1) / 2;

	half = (strlen(str) / 2) + 1;

	if (strlen(str) % 2 == 0)
	{
		while (strlen(str) != "")
		{
			_putchar(str[half]);
		}
	}
	else
	{
		_putchar(str[n]);
	}
	_putchar(*"\n");
}
