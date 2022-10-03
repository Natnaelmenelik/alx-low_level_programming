#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size : size of an array
 * @c : character
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}

	s[0] = 'c';
	s[1] = 'h';
	
	return(s);
}
