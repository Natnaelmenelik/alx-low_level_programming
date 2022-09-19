#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str : parameter
 *
 * Return :0 or 1
 */

void _puts(char *str)
{
	puts(str);
	_putchar(*" ");
}
