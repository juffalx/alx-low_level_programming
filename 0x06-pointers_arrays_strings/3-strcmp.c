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
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i > j)
	{
		return (15);
	}
	else if (i < j)
	{
		return (-15);
	}
	else if (i == j)
	{
		return (0);
	}
return (0);
}
