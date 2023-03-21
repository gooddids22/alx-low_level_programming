#include "main.h"

/**
 * main - alphabet
 * print_alphabet_x10 - print a - z ten times 
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
