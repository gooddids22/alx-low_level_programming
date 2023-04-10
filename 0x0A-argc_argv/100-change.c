#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number count of arguments
 * @argv: argument vector or character array of arguments
 *
* Return: Returns 0  if Successful
*/

int main(int argc, char *argv[])
{
	int number, x, value;

	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	value = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && number >= 0; x++)
	{
		while (number >= coin[x])
		{
			value++;
			number -= coin[x];
		}
	}

	printf("%d\n", value);
	return (0);
}
