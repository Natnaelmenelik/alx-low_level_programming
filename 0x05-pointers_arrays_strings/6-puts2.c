#include "main.h"
#include "string.h"

/**
 * puts2 - prints every character
 * @str : parameter
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
