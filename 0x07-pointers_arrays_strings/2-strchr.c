#include "main.h"

/**
 * _strchr - find same char and print after thant
 * @s: first parameter
 * @c: second parameter
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
