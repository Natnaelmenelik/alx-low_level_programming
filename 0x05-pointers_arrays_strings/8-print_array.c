#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a : parameter to be checked
 * @n : number of times to be printedd
 */

void print_array(int *a, int n)
{
	int i;

	while (i < n && i != (n - 1))
	{
		printf("%d", a[i]);
		printf(", ");	
	}
	/*for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}*/

	printf("\n");
}
