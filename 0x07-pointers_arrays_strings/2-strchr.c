#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strchr - locates a character in string
 * @s : string
 * @c : character to be located
 * Return: first occurance of cc or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (c + i);
	}
	return ('\0');
}
