#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - concatinates two strings
 * @dest : destination
 * @src : source
 * @n : number of bytes
 * Return: 0 or 1
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
