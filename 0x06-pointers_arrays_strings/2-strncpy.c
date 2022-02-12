#include "holberton.h"

/**
 * *_strncpy(char *dest, char *src, int n)
 * @dest: first pointer being evaluated
 * @src: second pointer being used
 * @n: int being used
 *
 * Description: copies two strings
 * return: return (0) is the required function
 */

Char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length =0; length <n; length++)
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
