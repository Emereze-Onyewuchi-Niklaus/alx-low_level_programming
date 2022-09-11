#include <stdio.h>

/**
 * main - Prints Data types sizes from the sizeof function
 *
 * Description: main function prints sizes of Data Types
 * with the sizeof function
 * Return: 1
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(lli));
	return (1);
}
