#include <stdio.h>
#include "main.h"

/**
 * _isupper - isupper convert lowercase to uppercase
 *@c: int parameter
 * Return: 0 Always(success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
