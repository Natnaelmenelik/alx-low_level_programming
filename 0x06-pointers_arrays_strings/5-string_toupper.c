#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_toupper - changes all lower case to upper
 * @str : string input
 * Return: 0 or 1
 */

char *string_toupper(char *str)
{
	toupper(str);
	return (str);

}
