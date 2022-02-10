/**
 * _puts_recursion - program startup
 * @s: pointer that is being evaluated.
 *
 * Description: prints a string followed by a n.
 * Return: (0) is the required function.
 */

#include "main.h"
void _puts_recursion(char *s)
{
  if (*s)
    {
      _putchar(*s);
      
      _puts_recursion(++s);
    }
  else
    {
      _putchar('\n');
    }
}

