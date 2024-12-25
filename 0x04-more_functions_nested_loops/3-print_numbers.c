#include "main.h"

/**
 * print_numbers- dispaly digit
 * @void: void parameter
 * Retrun: return digit one to nine
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
