#include "main.h"

/**
 * print_number - dispaly digit
 * @void: void parameter
 * Retrun: no return
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		if (i != '9')
		{
			_putchar('\n');
		}

	}
}
