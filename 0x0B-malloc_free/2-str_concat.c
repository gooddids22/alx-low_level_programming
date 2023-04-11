#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *conct;

	int n, cn;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = cn = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[cn] != '\0')
		cn++;
	conct = malloc(sizeof(char) * (n + cn + 1));
	if (conct == NULL)
		return (NULL);
	n = cn = 0;
	while (s1[n] != '\0')
	{
		conct[n] = s1[n];
		n++;
	}
	while (s2[cn] != '\0')
	{
		conct[n] = s2[cn];
		n++, cn++;
	}
	conct[n] = '\0';
	return (conct);
}

