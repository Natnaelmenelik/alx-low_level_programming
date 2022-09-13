#include "main.h"
/*
 * print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

int main(void)
{
	print_alphabet();
	_putchar(*"\n");
	return (0);
}
