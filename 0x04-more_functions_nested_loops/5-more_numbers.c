#include "main.h"

/**
 * more_numbers - function name prints ten number
 * void: function parameter
 * Return: retun 10 number's
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
				_putchar(z % 10 + '0');
			} else
			{
				_putchar('0' + z);
			}
		}
		_putchar('\n');
	}
}

