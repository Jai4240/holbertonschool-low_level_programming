#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: string to be appended to
  * @s2: string to have n bytes appended
  * @n: number of bytes to append to string 1
  *
  *Description: concatenates two strings
  *Return: return (0) is required function
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length;
	unsigned int string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > strlen(s2))
	{
		n=strlen(s2);
	}
	length = n;
	for (string = 0; s1[string]; string++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
	{
		return NULL;
	}
	length = 0;
	for (string = 0; s1[string]; string++)
	{
		concat[length++] = s1[string];
	}
	for (string = 0; s2[string] && string < n; string++)
	{
		concat[length++] = s2[string];
	}
	concat[length] = '\0';
	return (concat);
}
