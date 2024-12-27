#include "main.h"

/**
 * more_numbers - function name
 * void: parameter
 * Returns: to time it's number
 */

void more_numbers(void)
{
	int i;
	int z;

	for (i = 1; i <= 10; i++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar(z / 10 + '0');
			}
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
