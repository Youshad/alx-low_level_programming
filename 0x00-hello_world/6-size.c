#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to prin the size of various types.
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n"v, (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n"v, (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n"v, (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n"v, (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n"v, (unsigned long)sizeof(f));
return (0);
}
