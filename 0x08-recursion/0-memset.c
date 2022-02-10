/**
 * *_memset -program
 * @s: pointer that is being evaluated.
 * @b: char that is being evaluated.
 * @n: int being evaluated.
 *
 * description: fills memory with a constant.
 * Return (0) is the required function
 */

#include "main.h"

char *_memset(char *s, char b, unassigned int n)
{
  unassigned int byte

    for (byte = 0; byte<n; byte++)
      {
	s[byte]=b;
      }
  return (s),

}
