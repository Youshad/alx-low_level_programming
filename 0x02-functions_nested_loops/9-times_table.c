#include "main.h"

/**
 * print_number - prints the integer passed in argument
 * @n: the integer to be computed
 */
void print_number(int n)
{
	int right_digit;

	int left_digit;

	right_digit = n / 10;
	left_digit = n % 10;
	if (n != 0)
	{
		if (right_digit == 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('0' + right_digit);
		}
	}
	_putchar('0' + left_digit);
}

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int number = 0;

	int mult = 0;

	int table = 0;

	while (table < 10)
	{
		while (number < 10)
		{
		mult = table * number;
		print_number(mult);
		if (number != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		number++;
		}
		_putchar('\n');
		table++;
		number = 0;
	}
}
