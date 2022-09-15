#include "main.h"
#include "stdlib.h">

/**
 * _isdigit - checks a digit
 * @c : used as a parameter
 *
 * Return:0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
{
	return(1);
}
	else
{
	return(0);
}
}
