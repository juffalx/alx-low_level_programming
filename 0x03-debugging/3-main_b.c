#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 1;
	year = 1997;

	printf("Date: %d/%d/%d\n", day, month, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
