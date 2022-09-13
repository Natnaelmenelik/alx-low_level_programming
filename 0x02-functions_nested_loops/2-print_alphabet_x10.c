#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase letters 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a <= 9)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
{
	_putchar(ab);
}
	_putchar(*"\n");
	a++;
}

}
