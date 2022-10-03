#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str : string
 * Return: a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *mina;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	mina = strdup(str);
	free(s);
	return (mina);
}

