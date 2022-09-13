#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c : serves as parameter
 * Return: 0 or 1
 */

int print_last_digit(int c)
{
if (c >= 0)
{
	int d = c % 10;

	return (d);
	_putchar(*"\n");
}
else
{
	d = d * -1;
	return (d);
	_putchar(*"\n");
}
}

