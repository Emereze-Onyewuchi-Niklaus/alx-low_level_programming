#include <stdio.h>

/**
 * main - prints a string of hexadecimal numbers in lower case
 * using the putchar function after the program runs
 *
 * Return: 0 always
 */
int main(void)
{
	int f;
	char h;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
