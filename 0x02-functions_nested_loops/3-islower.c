#include "main.h"
#include <ctype.h>

/**
 * _islower - checks whether the letter is lowercase or uppercase
 *
 * @c : used as parameter
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c))
{
	return (1);
}
else
{
	return (0);
}

}
