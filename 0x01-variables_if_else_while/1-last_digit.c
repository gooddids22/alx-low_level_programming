#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Entry point for the program
 *
 * Return: Return 0 Success
 */

/* This shows the code to be solved */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* This shows the last digit */
	m = n % 10;
	/* This shows the conditions to be met for the code */
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
