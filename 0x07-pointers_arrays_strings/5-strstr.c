#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack : initial string
 * @needle : string to be compared
 * Return: a pointer to the beginning of the located substrin or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *mina;

	mina = strstr(haystack, needle);

	return (mina);
}
