#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: sometimes 1 (Error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 70);
	return 1;
}