#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str : parameter
 * Return: 0 or 1
 */

void puts_half(char *str)
{
	unsigned int n, i, half;

	n = (strlen(str) - 1) / 2;

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
		for (i = n; i < strlen(str); i++)
		{
			_putchar(str[n]);
		}
	}
	_putchar(*"\n");
}
