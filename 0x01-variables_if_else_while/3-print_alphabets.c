#include <stdio.h>

/**
 * main - prints characters in lower an upper case using
 * the putchar function after the program executes
 *
 * Return: 0 always
 */
int main(void)
{
	char ch, c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
