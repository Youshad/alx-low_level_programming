#include "main.h"

/**
 * prtputchar - Prints "_putchar" to the stdout
 */
void prtputchar(void)
{

	char string[9] = "_putchar";

	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - The main function of the program.
 *
 * Return: 0 if no errors were produced earlier
 */
int main(void)
{

	prtputchar();
	return (0);
}
