#include "main.h"

/**
 * ptrputchar - writes _putchar to the stdout
 *
 * Return: void
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
 * Return : 0
 */
int main(void)
{

	prtputchar();
	return (0);
}
