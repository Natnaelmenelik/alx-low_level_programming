#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s : string 1
 * @accept : string 2
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *fnd;

	fnd = strpbrk(s, accept);
	return (fnd);
}
