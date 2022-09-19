#include "main.h"

/**
 * print_rev - prints a string in a reverse matter
 * @s : parameter
 * Return: 0 or 1
 */

void rev_string(char *s)
{
        int i = 0;

        while (s[i])
                i++;

        while (i--)
                _putchar(s[i]);
}
