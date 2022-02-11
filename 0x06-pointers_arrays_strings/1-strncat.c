#include "holberton.h"

/**
* The _strncat function is similar to the _strcat function, except that
* it will use at most n bytes from src;
* and src does not need to be null-terminated if it contains n or more bytes
* Return - a pointer to the resulting string dest
*/

int main (void)

  char *_strncat(char *dest, char *src, int n)

{
  int length ;
  int string;

  for (length = 0; dest[length] ! = '\0'; length ++);
  {
    continue;
  }
  for (string = 0; src[string] && string < n; string++);

  {
    dest[length++] = src[string];
  }
  dest[length]='\0';

  return(dest);
}
