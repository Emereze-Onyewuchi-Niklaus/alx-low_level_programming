#include <stdio.h>

/**
 * main - prints the alphabet in lower case using the putchar
 * function when the program executes
 *
 * Return: 0 always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
