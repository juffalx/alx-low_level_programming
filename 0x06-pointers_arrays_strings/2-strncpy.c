#include "main.h"

/**
 * _strncpy - copy two value with n byte
 * @dest: first parameter
 * @src: second parameter
 * @n: thired parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
