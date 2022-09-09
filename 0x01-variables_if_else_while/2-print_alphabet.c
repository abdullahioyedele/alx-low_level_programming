#include <stdio.h>

/**
 * main - Program Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	while (a <= 127)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
