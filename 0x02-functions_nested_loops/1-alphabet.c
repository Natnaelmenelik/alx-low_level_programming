#include "main.h"
/*
 * print_alphabet - function to print abcdef
 *
 * Description - main prints lowecase letters
 * Return: 0
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar(*"\n");
}
