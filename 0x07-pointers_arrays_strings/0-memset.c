#include "main.h"

/**
 * _memset - n time of  change *s array
 * @s: insert array for change value example buffer
 * @b: constant mnfelgewn value mnasgebabet
 * @n: mn yahlun chnage lemadrge mnwesnbet
 *
 * Return: s of n times change value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
