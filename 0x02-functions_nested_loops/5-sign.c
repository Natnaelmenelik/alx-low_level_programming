#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n : used as parameter
 * Return:0 or 1
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar(*"+");
	return (1);
}
else if (n == 0)
{
	_putchar(*"0x30");
	return (0);
}
else
{
	_putchar(*"-");
	return (1);
}
	return (0);
}
