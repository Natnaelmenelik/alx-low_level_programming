#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing the stored number into +ve, -ve, or zero 
 * 
 * Description: using the main fuction
 * the program prints "Programming is positives, negative or zero"
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else
{
	printf("%i is negative\n", n);
}
return (0);
}
