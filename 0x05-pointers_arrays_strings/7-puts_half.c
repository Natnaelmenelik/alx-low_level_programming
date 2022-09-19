#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str : parameter
 * Return: 0 or 1
 */

void puts_half(char *str)
{
	unsigned int n, i, i2, half;

	n = (strlen(str) - 1 ) / 2;

	half = strlen(str) / 2;

	if (strlen(str) % 2 == 0)
	{
		for (i = half; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i2 = n; i2 < strlen(str); i2++)
		{
			_putchar(str[i2]);
		}
	}
	_putchar(*"\n");
}
