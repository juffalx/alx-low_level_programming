#include "main.h"

/**
 * _isdigit - chack it's digit or not
 * @c: int parameter
 * * Rerutn: int
*/

int _isdigit(int c)
{
	if (c >= '0' && c < '10')
	{
		return (1);
	}
	return (0);
}
