#include <stdio.h>

/**
 * main - Program prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar ((num % 10) + '0');
		num++;

	/*	if (num == 9)
			continue;
	*/
		putchar (',');
		putchar (' ');
	}

	putchar('\n');

	return (0);
}
