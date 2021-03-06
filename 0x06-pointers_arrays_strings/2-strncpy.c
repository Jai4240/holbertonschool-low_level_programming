#include "holberton.h"

/**
 * *_strncpy - (char *dest, char *src, int n)
 * @dest: first pointer  evaluated
 * @src: second pointer being used
 * @n: int being used
 *
 * description: copies two strings
 * Return: return (0) required function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		dest[length] = src[length];
		if (src[length] == '\0')
		{
			while (length < n)
			{
				dest[length] = '\0';
				length++;
			}
		}
	}
	return (dest);
}
