#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: the number whose absolute value is to printed
 *
 * Return: n and -n for absolute value of +ve and _ve respectively
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
