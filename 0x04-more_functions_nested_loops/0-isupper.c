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
	if (c == toupper(c))
	{
		return(1);
	}
	else 
	{

		return(0);
	}
}
