#include <stdio.h>

/**
 * main - prints numbers using the printf function
 * when the program executes
 *
 * Return: 0 always
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
