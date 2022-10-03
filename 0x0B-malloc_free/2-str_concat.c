#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1 : string 1
 * @s2 : string 2 
 * Return: a pointer to the concatinated string 
 */

char *str_concat(char *s1, char *s2)
{
	char *mina;
	char *s;

	if (s1 == NULL)
	{
		return ('\0');
	}

	s = malloc(sizeof(char) - 1);

	if (s == NULL)
	{
		return (NULL);
	}

	mina = strcat(s1, s2);

	free(s);
	return (mina);
}

