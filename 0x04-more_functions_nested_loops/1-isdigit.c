#include "main.h"

/**
 * _isdigit - Checks if the given character is a digit (0 through 9).
 * @c: The character to check, represented as an integer.
 *
 * Return: 1 if c is a digit (0 through 9), 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
