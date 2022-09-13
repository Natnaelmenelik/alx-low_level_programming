#include "main.h"

/**
 * jack_bauer - counts every minutes of a day
 * Return : 0
 */

void jack_bauer(void)
{
int sec = 0;
int min = 0;

while (sec <= 59)
{
	_putchar(min + '0');
	_putchar(':');
	_putchar(sec + '0');
	min++;
}
	_putchar(*"\n");
}
