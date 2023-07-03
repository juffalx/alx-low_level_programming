#include "main.h"

/**
 * _memset - to fill memory address value by specific input
 * @s: first parameter uses for filled memory address lemaweq new
 * @b: hulunm ye s index migeaw value
 * @n: this is last parameter uses for byte to chage , control the loop
 *
 * Return: char or s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;

	for (; j < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
