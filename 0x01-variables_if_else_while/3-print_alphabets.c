#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - printing the word to lower case alphabtet
 *Description: using the main fuction
 *the program prints "prints in lower case and then upper case"
 *Return: 0
 */
int main(void)
{
char mi;
char me;
for (mi = 'a' ; mi <= 'z' ; mi++)
{
for (me = 'A' ; me <= 'Z' ; me++)
{
	putchar(mi)putchar(me);
}
}
putchar('\n');
return (0);
}
