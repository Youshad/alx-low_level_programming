#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
