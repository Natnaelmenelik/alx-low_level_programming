#include "main.h"
/*
 * print_alphabet(void) - function to print lowercase letters
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar(*"\n");
}
