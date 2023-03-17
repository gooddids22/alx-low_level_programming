#include <stdio.h>

/**
 * main - Main entry point for the program
 *
 * Return: Return 0 when successful
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
