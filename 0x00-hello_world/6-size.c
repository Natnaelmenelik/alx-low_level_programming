#include <stdio.h>

/**
 *  * main -print the size of different data types
 *   *
 *    * using the main funvtion
 *     *this program prints "size of data types"
 *      *Return: 0
 */

int main(void)
{
	    int intType;
	    float floatType;
	    long int longType;
	    long long int longintType;
	    char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
		return (0);

}
