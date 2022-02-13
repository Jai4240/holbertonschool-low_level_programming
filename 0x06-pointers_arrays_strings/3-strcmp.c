#include "holberton.h"

/**
 * _strcmp - start of program
 * @s1: first pointer
 * @s2: second pointer
 *
 * Description: compares 2 strings
 * Return: return (0) is the required function
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2)
	{
		diff = *s1++ - *s2++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}

