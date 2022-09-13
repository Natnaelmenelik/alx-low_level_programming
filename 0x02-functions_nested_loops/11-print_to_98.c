#include "main.h"

/**
 * print_to_98 - prints numbers to 1 - 98
 *
 * Return:0 or 1
 */

void print_to_98(int n)
	int e = 98

{
	if (n > e)
{
	while (n > e)
{
	_putchar(n + '0');
	_putchar(*",");
	_putchar(*"32");
	n--;
}
	else if (n == e)
{
	_putchar(n + '0');
}
	else if (n < 98)
{
	while (n < 98)
{
	_putchar(n + '0';
	_putchar(*",");
	_putchar(*"32");
	n++;
}
}
	_putchar(e);
}
