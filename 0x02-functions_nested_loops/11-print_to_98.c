#include "main.h"
#include <stdlib.h>
#include <stdhio.h>

/**
 * print_to_98 - prints numbers to 1 - 98
 *
 * Return:0 or 1
 */

void print_to_98(int n)
{
	while (n < 98)
{
	printf("%i, ", n);
	n++;
}
	while (n > 98)
{
	printf("%i, ", n)
	n--;
}
	printf("98");
	putchar('\n');
}
