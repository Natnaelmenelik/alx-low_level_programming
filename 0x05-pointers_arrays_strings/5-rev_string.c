#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - prints a string in a reverse matter
 * @s : parameter
 * Return: 0 or 1
 */

void rev_string(char *s)
{
	int g, numb;
	int tmpry = 0;

	for(numb=0; s[numb] != 0; numb++);
	for(g = 0; g <numb/2; g++)
	{
		tmpry = s[g];
		s[g]=s[numb - 1 - g];
		s[numb - 1 - g] = tmpry;
	}
	for(g = 0; g < numb; g++)
		_putchar(s[g]);
}
