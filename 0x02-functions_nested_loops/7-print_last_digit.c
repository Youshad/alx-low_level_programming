#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *@n: the integer to be computed
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
