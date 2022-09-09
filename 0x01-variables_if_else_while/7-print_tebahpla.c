#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - printing the word to lower case alphabtet in reverse
 *Description: using the main fuction
 *the program prints "prints in lower case and in reverse order"
 *Return: 0
 */
int main(void)
{
char mi;
for (mi = 'z' ; mi <= 'a' ; mi--)
{
	putchar(mi);
}
putchar('\n');
return (0);
}
