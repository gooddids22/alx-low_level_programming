#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area of constant
 * @n: bytes of memory
 * @src: data is copied from
 * @dest: data is copied to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*Declaring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/


	return (dest);
}
