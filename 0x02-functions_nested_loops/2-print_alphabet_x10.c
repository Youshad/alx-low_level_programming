#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

	int counter = 0;

	while (counter < 10)
	{
		int i = 0;

		while (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
			i++;
		}
		_putchar('\n');
		counter++;
	}
}
