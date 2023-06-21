#include "main.h"

/**
 * ptrputchar - writes _putchar to the stdout
 * Description: This function uses the _putchar function
 * to print every char of _putchar by using a while loop.
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
 * Description: calls the prtputchar func.
 * Return : 0
 */
int main(void)
{

	prtputchar();
	return (0);
}
