#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase letters 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	_putchar(a);
}
	_putchar(*"\n");
	a++;
}

}
