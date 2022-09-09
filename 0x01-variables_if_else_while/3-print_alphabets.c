#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;
	char c = A;

	while (a <= 127)
	{
		putchar(a);
		a = a + 1;
	}

	while (c <= Z)
	{
		putchar(c);
		c++;
	}

	putchar("\n");

	return (0);
}
