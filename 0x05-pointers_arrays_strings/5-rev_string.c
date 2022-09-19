#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - prints a string in a reverse matter
 * @s : parameter
 * Return: 0 or 1
 */

void rev_string(char *s)
{
	int mina;

	for(mina = strlen(s) - 1; mina >= 0; mina--)
		_putchar(s);
}
