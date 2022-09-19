#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copy a string from src to dest
 * @dest : destination
 * @src : source
 * Return: 0 or 1
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	_putchar(*dest);
}
