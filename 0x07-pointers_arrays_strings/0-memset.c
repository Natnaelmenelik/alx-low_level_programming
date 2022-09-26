#include "main.h"
#include <stdlib.h>
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
	memset(s, 'b', n);
	return (s);
}
