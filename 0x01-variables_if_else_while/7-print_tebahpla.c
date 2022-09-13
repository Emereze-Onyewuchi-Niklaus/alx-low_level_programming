#include <stdio.h>

/**
 * main - prints the alphabets in reverse pattern using the
 * putchar funtion after the program executes
 *
 * Return: 0 always
 */
int main(void)
{
	char bt;

	for (bt = 'z'; bt >= 'a'; bt--)
	{
		putchar(bt);
	}
	putchar('\n');
	return (0);
}
