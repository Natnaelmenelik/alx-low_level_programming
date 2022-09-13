#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks whether the character is alphabetic
 *  
 * @c : used as parameter
 * Return: 0
 */
int _isalpha(int c)
{
      if (isalpha(c))
{
	return (1);
}
else
{
	return (0);
}

}
