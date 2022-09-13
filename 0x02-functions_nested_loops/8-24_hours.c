#include "main.h"

/**
 * jack_bauer - counts every minutes of a day
 * Return : 0
 */

void jack_bauer(void)
{
int sec;
int min = 0;

for (sec = 0; sec <= 59; sec++)
{
	_putchar(min + '0');
	_putchar(*"58");
	_putchar(sec + '0');
	min++;
}
}
