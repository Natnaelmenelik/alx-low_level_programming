#include "main.h"

/**
 * jack_bauer - counts every minutes of a day
 * Return : 0
 */

void jack_bauer(void)
{
int sec;
int min = 0;

while (sec <= 59)
{
	_putchar(min + '0');
	_putchar(*"58");
	_putchar(sec + '0');
	sec++;
	min++;
}
	_putchar(*"\n");
}
