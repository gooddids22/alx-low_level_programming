#include "main.h"

/**
 * print_most_numbers - Print num excpet 2 and 4
 * 
 * Return: 0
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0; <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))

			_putchar(c);
		}
	}
	_putchar('\n');
}
