#include "main.h"

/**
 * ptrputchar - writes _putchar to the stdout
 * Return: 0
 */
void prtputchar(void)
{

	char string[9]= "_putchar";
	
	int i = 0;
	
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
    prtputchar();
    return 0;
}
