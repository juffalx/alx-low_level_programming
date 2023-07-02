#include <stdio.h>
#include "main.h"

/**
 * main - isupper proto type
 *
 * Return: 0 Always(success)
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	return(0);
}
