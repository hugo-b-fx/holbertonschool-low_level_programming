#include "main.h"

/**
 * factorial - Calculates factorial number.
 * @n: number to calculate factorial.
 * Return: facorial number
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
