#include "main.h"

/**
 * _islower - checks the code for lowercase characters
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
