#include "main.h"

/**
 * print_to_98 - prints numbers to 1 - 98
 *
 * Return:0 or 1
 */

void print_to_98(int n)
{
	while (n > 0 && n < 98 )
	{
	_putchar(n + '0');
	n++;
	_putchar(*",");
	}
	_putchar(*"b");
}
