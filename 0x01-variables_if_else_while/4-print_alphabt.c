#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing the word to lower case alphabtet
 * Description: using the main fuction
 * the program prints "prints in lower case"
 * Return: 0
 */
int main(void)
{
char mi;

for (mi = 'a' ; mi <= 'z' ; mi++)
{
if(mi != 'e' && mi != 'q')
{
	putchar(mi);
}
}
putchar('\n');
return (0);
}
