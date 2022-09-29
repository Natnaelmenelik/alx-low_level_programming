#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _print_rev_recursion - prints reverse in string
 * @s : the string
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
