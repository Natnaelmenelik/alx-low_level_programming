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
	int *len, *len2, *i, *j;
	len = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) - 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		if (s1[i] == NULL)
		{
			return ("");
		}
	}

	for (j = 0; j < len2; j++)
	{
		if (s2[j] == NULL)
		{
			return("");
		}
	}
	mina = strcat(s1, s2);

	return (mina);
}

