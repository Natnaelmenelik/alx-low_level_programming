#include "main.h"
/*
 * print alphabet
 * Return: 0
 */
void print_alphabet(void);
{
	for (char c = a, c <= z, c++)
	{
		_putchar(c);
	}
}

int main(void)
{
	print_alphabet();
	_putchar("\n");
	return (0);
}
