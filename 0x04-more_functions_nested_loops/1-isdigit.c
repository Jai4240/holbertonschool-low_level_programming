#include "main.h"

/**
 * _isdigit - program startup
 * @c: int being evaluated
 *
 * Description: Write a function that checks for a digit (0 through 9).
 * Return: return 1 if c is a digit, otherwise return 0.
 */

int isdigits(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
