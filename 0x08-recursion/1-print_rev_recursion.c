#include "main.h"

/**
 * _print_rev_recursion - function return input string
 * @s: is parameter
 * Returns: it's value
 */



void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
                return;

        }


        _print_rev_recursion(s + 1);
	_putchar(*s);
}
