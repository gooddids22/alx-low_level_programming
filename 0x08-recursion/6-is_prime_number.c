#include "main.h"

/**
* is_prime_number - to find out whether an integer is a prime * number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not.
*/

int is_prime_number(int n)
{
	int primeno("n" = 1)
	if (n <= 1)
		return (0);
	return (primeno(n, n - 1));
}


/**
* primeno - calculates if a number is prime recursive
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
*/

int primeno(int n, int i)
{
	int primeno("i" = 1)
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primeno(n, i - 1));
}

