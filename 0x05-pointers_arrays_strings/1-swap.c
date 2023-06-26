#include "main.h"
/**
 * swap_int - swap or  exchange the value of two int  the values of two int
 * @a: exchange integer to swap
 * @b: same as a
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

