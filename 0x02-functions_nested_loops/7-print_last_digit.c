#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c : serves as parameter
 * Return: 0 or 1
 */

int print_last_digit(int c)
{
int d = c % 10;

if (c >= 0)
{
	_putchar(d + '0');
	return (d);
}
else
{
	d *= -1;
	_putchar(d + '0');
	return (d);
}
}

