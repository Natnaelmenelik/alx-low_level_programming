#include "main.h"
#include "stdlib.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks a digit
 * @c : used as a parameter
 *
 * Return:0 or 1
 */

int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
{
	if (isdigit(c))
{
	return(1);
}
	else
{
	return(0);
}
}
}
