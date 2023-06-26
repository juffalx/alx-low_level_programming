#include "main.h"
/**
 * _strlen - returns len of string
 * @s: string parameters
 * Return: length of string by while loop
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
