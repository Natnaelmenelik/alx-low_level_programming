#include "main.h"
#include "string.h"

/**
 * puts2 - prints every character
 * @str : parameter
 * Return: 0
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar(*"\n");
}
