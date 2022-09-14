#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: alphabetic character to be checked
 *
 * Return: return 1 if it's a letter (lowercase or uppercase), otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
