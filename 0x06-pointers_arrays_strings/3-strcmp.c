#include "main.h"

/**
 * _strcmp - compire two string
 * @s1: pointer parameter one
 * @s2: pointer parameter two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}
