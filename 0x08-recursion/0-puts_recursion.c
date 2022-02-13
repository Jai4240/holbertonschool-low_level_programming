#include "main.h"

/**
 * _puts_recursion - program startup
 * @s: pointer that is being evaluated.
 *
 * Description: prints a string followed by a n.
 * Return: (0) is the required function.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
