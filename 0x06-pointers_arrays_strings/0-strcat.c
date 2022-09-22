#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concatnates two strings
 * @*dest : destination
 * @*src : source
 * Return: 0 or 1
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
