#include "main.h"

/**
 * print_number - prints an integer
 * @n: The int to be printed
 */
void print_number(int n)
{
	int num_digits = 0;

	int tmp = n;

	int div = 1;

	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (tmp != 0)
	{
		tmp /= 10;
		num_digits++;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 1; i < num_digits; i++)
	{
		div *= 10;
	}
	while (div != 0)
	{
		int digit = n / div;

		_putchar('0' + digit);
		n %= div;
		div /= 10;
	}
}

/**
 * print_to_98 - prints all the intgers between an integer and 98
 * @n: the starting integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	print_number(98);
	_putchar('\n');
}
