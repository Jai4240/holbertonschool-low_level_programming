#include "holberton.h"

/**
 * _strcmp - program startup
 * @s1: first pointer
 * @s2: second pointer
 *
 * Description: compares 2 strings
 * Return: return (0) is the required function
 */

int _strcmp(char *s1, char *s2)
{
	int string;

	for (string = 0; s1[string] != '\0' && s2[string] != '\0';
		{
			if (*s1 - *s2 == 0)
			{
				s1++;
				s2++;
			}
		}
		     return (*s1 - *s2)
}
