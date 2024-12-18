#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size of the memory to be allacate
 *
 * Return: a pointr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
