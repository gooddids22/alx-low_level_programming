#include <stdio.h>

/**
 * main - Main entry point
 *
 * Return: Returns 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
