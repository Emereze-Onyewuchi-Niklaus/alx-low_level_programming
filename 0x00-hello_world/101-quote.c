#include <stdio.h>
#include <unistd.h>

/**
 * main - writes a string using the Write call function
 *
 * Description: Writes a string using the wirte call
 * to standard output
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
