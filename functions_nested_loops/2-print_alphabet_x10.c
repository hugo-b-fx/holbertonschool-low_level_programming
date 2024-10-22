#include "main.h"

/**
 * print_alphabet_x10 -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char dix;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (dix = 'a'; dix <= 'z'; dix++)
			_putchar(dix);
	}
	_putchar('\n');
}
