#include "main.h"

/**
 * print_alphabet_x10 - prints english alphabets in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char letters;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (letters = 97; letters < 123; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
