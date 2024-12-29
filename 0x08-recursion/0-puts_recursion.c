#include "main.h"

/**
 * _puts_recursion - function return input string
 * 's': is parameter
 * Return: it's value
 */



void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);
	_puts_recursion(s + 1);
}
