#include "main.h"
/**
 * _strcat - concatinate two strings
 * return: return concatinate value to first parameter
 * @dest: first parameter
 * @src: second parameter for string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
