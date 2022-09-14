#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
