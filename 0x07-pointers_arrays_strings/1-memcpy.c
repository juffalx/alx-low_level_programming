#include "main.h"

/**
 * _memcpy - first 50 of 10 value change
 * @dest: recive first input
 * @src: seocnd parameter
 * @n: last parameter
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int i = n;

	for (; z < i; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
