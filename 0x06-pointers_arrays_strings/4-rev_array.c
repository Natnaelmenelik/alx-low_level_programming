#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @a : name of the array
 * @n : number of elements in z the array
 * Return: 0 or 1
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n -1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
