#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @a : name of the array
 * @n : number of elements in z the array
 * Return: 0 or 1
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar(a[i]);
		_putchar(*",");
		_putchar(*" ");

		if (i == 0)
		{
			_putchar(a[i]);
		}
	}
}
