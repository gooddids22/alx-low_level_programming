#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that obtains the length of a substring
 * @s: String
 * @accept: a string that contains characters in s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')

		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{

		}

		i++;
	}

	return (count);
}
