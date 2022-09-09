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
	    //long long int longintType;
	    char charType;

		printf("Size of a char: %zu bytes\n", sizeof(charType));
	        printf("Size of an int: %zu bytes\n", sizeof(intType));
	        printf("Size of a long int: %zu bytes\n", sizeof(longType));
		printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
		printf("Size of a float: %zu byte\n", sizeof(floatType));
		return (0);

}
