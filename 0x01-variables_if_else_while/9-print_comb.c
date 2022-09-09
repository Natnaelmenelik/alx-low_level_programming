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
int mi = 48;
int a = 44;
int b = 32;

while (mi < 58)
{
	putchar(mi);
	putchar(a);
	putchar(b);
mi++;
}
putchar(b);
return (0);
}
