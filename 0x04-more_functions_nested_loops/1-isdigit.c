#include "main.h"
#include "stdlib.h"

/**
 * _isdigit - checks a digit
 * @c : used as a parameter
 *
 * Return:0 or 1
 */

int _isdigit(int c)
{
	while (c < 10)
{
	if (isdigit(c))
{
	return(1);
}
	else
{
	return(0);
}
	c++;
}

}
