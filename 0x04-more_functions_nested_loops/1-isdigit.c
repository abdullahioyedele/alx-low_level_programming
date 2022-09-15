#include "main.h"

/**
 * _isdigit - check for digit (0 - 9)
 *
 * @c: variable to be checked
 *
 * Return: 1 if variable is digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
