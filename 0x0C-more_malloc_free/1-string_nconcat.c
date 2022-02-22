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
	/* declarations */

	_strcat(char *s1, char *s2)
{}
	unsigned int a,b;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (a > strlen(s2))
	{
	   a = strlen(s2)
		   }
        for (a = 0; s1[n]; i++)
	{}
	for (b = 0; s2[b] && b < n; b++)
	{}
	ptr = malloc((strlen(s1) + n + 1)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		ptr[a] = s1[a];
	for (b = 0; s2[b] && b < n; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';
	return (ptr);
}
