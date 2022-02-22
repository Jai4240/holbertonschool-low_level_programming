#include "main.h"
#include <stdlib.h>
#include "string.h"

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
	unsigned int n, int a;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
	{
	   n = strlen(s2)
		   }
        for (n = 0; s1[n]; i++)
	{}
	for (a = 0; s2[a] && a < n; a++)
	{}
	ptr = malloc((strlen(s1) + n + 1)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (n = 0; s1[n]; i++)
		ptr[n] = s1[n];
	for (a = 0; s2[a] && a < n; a++)
		ptr[i + a] = s2[a];
	ptr[n + a] = '\0';
	return (ptr);
}
