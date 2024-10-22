#include "main.h"

void print_alphabet_x10(void)
{
	char dix;
	int x;

	for (x = 1; x < 10; x++)
	{
		for (dix ='a'; dix <= 'z'; dix++)
			_putchar(dix);
	}
	_putchar('\n');
}
