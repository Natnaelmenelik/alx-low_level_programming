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
	char *s;
	/*long unsigned*/ int len, len2, i, j;
	len = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) - 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		if (s1[i] == *"")
		{
			return ("");
		}
	}

	for (j = 0; j < len2; j++)
	{
		if (s2[j] == *"")
		{
			return("");
		}
	}
	mina = strcat(s2, s1);

	return (s2);
}

