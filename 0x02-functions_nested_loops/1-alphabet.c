#include "main.h"

void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 97; alpha <= 127; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
