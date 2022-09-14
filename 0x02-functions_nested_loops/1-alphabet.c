/**
 * main - printd alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 97; alpha < 123; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
