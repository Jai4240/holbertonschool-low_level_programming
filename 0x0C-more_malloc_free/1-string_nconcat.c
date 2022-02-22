#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: string to be appended to
  * @s2: string to have n bytes appended
  * @n: number of bytes to append to string 1
  * Return: char *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *new_space;
	unsigned int length = n;
	unsigned int string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string = 0; s1[string]; string++)
	{
		length++;
	}
	new_space  = malloc(sizeof(char) * (length + 1));
	if (new_space == NULL)
	{
		return NULL;
	}
	length = 0;
	for (string = 0; s1[string]; string++)
	{
		new_space[length++] = s1[string];
	}
	for (string = 0; s2[string] && string < n; string++)
	{
		new_space[length++] = s2[string];
	}
	new_space[length] = '\0';
	return (new_space);
}
