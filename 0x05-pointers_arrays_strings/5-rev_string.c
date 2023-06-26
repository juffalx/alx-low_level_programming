#include "main.h"

/**
 * rev_string - Reverse the stringes
 * @s: insert the string value
 * Return: return String in reverse mode
 */

void rev_string(char *s)
{
	char rev = s[0];
	int num1 = 0;
	int i;

	while (s[num1] != '\0')
	num1++;
	for (i = 0; i < num1; i++)
	{
		num1--;
		rev = s[i];
		s[i] = s[num1];
		s[num1] = rev;
	}
}

