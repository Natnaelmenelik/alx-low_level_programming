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

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");

		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
