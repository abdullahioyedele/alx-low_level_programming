#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting from 0
*/

void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
