#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}