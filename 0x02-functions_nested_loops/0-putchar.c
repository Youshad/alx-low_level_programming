#include "_putchar.h"

/**
 * main - writes _putchar to the stdout
 * Return: 0
 */
int main(void)
{
	char string[9]= "_putchar";
	int i = 0;
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}

