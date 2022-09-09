#include <stdio.h>

/**
 * main - Program Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x = x + 1;
	}

	printf("\n");

	return (0);
}
