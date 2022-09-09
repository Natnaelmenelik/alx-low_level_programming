#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* printing the stored number into +ve, -ve, or zero */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf(" is positive \n");

	{
		 printf(" is zero \n");
	}
	else
	{
		 printf(" is negative \n");
	}
	return (0);
}
