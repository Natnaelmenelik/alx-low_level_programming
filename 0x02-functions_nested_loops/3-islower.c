#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - checks whether the letter is lowercase or uppercase
 *
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c))
{
	return(1);
}
else 
{
	 return(0);
}

}
