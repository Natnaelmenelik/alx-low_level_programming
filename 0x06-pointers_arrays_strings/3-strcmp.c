#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1 : first string
 * @s2 : second string
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	d = strcmp(s1, s2);
	_putchar("%d", d);
}
