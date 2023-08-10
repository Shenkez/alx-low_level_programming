#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 * @b : memory size
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));


	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
