#include <stdio.h>

/**
 * main - prints a string of numbers using the putchar function
 * after the program executes
 *
 * Return: 0 always
 */
int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
