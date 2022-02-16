#include "main.h"

/**
 * create_array -creates an array of chars and  init with a specialized char
 * @size: size of array in characters
 * @c: character to initialize with
 * Return: pointer to the array or null if size = 0
 *
 */

char *create_array(unsigned int size, char c)
{
char *a;
a = &c;
a = (char *)malloc(4);
if (size == 0)
{
return (NULL);
}
return (a);
}
