#include <stdio.h>

/**
 *  * main -print the size of different data typesn
 *   *
 *    * using the main funvtion
 *     *this program prints "size of data types"
 *      *Return: 0
 */

int main(void) {
	    int intType;
	    float floatType;
	    long int longType;
	    long long int longintType;
	    char charType;

		printf("Size of char: %zu bytes\n", sizeof(charType));
	        printf("Size of int: %zu bytes\n", sizeof(intType));
	        printf("Size of long int: %zu bytes\n", sizeof(longType));
		printf("Size of long long int: %zu bytes\n", sizeof(longintType));
		printf("Size of float: %zu byte\n", sizeof(floatType));

}
