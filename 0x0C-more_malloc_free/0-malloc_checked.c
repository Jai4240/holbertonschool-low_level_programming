#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - writes a function that allocates memory using malloc.
 * @b: unsigned int
 * Return: void
 **/

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return(a);
}
