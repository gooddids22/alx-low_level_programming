#include <stdio.h>

/**
 * main - Main entry point to the program
 *
 * Return: Return 0 successfully
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
