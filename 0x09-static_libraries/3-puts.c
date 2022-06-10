#include "main.h"
/**
 * _puts - Print string to console
 * @str: string to print
 *
 *
 *
 *
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
