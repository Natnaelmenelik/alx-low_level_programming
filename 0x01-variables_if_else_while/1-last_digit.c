#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
/** 
 * main - prints the last digit of the number
 *
 * Description: the main function prints the last digit of the number
 * Return: 0
 */
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

x = n % 10;
if (x > 5)
{
	printf("Last digit of ",n "is ",x "and is greater than 5\n");
}
else if (x == 0)
{
	printf( "Last digit of ",n "is ",x "and is 0\n");
}	
else if (x < 6 && x != 0)
{
	printf(x, "Last digit of ",n "is ",x "and is less than 6 and not 0\n");
}	
return (0);
}
