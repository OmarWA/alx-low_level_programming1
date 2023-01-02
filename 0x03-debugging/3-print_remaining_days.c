#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int isLeap = 0;

	if (!((year % 4) == 0))
	{
		if ((month == 2) && (day == 60))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			return;
		}
	}
	else
	{
		if ((((year % 100) == 0) && ((year % 400) == 0)) || ((year % 4) == 0))
		{
			day = ((month >= 2) && (day >= 60)) ? (day + 1) : day;
			isLeap = 1;
		}
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", ((isLeap == 1) ? 366 : 365) - day);
}
