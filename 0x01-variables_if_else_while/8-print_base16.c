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
int mi;
char me;

for (mi = 48 ; mi < 58 ; mi++)
{
	putchar(mi);
}
for (me = 'a' ; me < 'g' ; me++)
{
	putchar(me);
}
putchar('\n');
return (0);
}
