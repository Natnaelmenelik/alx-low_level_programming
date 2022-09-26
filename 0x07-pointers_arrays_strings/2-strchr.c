#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in string
 * @s : string
 * @c : character to be located
 * Return: 0 or 1
 */

char *_strchr(char *s, char c)
{
	char mina;

	mina = strchr(s, c);
	return (mina);
}
