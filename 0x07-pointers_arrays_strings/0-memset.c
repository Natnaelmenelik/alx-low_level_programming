#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_memset - function that fills memory with a constant byte.
 * @s : string
 * @b : the value to be set
 * @b : number of bytes
 * Return: 0 or 1;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
