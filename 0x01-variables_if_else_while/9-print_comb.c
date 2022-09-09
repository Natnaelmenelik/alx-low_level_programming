#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - printing base 10 numbers starting from 0
 *Description: using the main fuction
 *the program prints "prints base 10 numbers"
 *Return: 0
 */
int main(void)
{
int c;

for (c = 48 ; c <= 57 ; c++)
{
	putchar(c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
