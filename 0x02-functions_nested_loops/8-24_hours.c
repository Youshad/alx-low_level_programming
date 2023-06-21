#include "main.h"

/**
 * print_hour - prints the hour on day style
 * @hour: the hour
 * @minute: the minute
 */
void print_hour(int hour, int minute)
{
	int right_digit = hour % 10;

	int left_digit = 0;

	if (hour >= 10)
	{
		left_digit = hour / 10;
	}
	_putchar('0' + left_digit);
	_putchar('0' + right_digit);
	_putchar(':');
	right_digit = minute % 10;
	left_digit = 0;
	if (minute >= 10)
	{
		left_digit = minute / 10;
	}
	_putchar('0' + left_digit);
	_putchar('0' + right_digit);
	_putchar('\n');
}

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hours = 0;

	int minutes = 0;

	int max_hours = 23;

	int max_minutes = 59;

	while (hours <= max_hours)
	{
		while (minutes <= max_minutes)
		{
			print_hour(hours, minutes);
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}

