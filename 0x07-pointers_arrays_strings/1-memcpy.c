#include "main.h"
#include "string.h"

/**
 * *_memcpy - copies the memory area
 * @dest : the destination
 * @src : source
 * @n : number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
