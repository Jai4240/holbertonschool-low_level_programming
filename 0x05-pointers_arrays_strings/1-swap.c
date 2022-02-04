/**
*swap_int description of process: swaps values of a and b
*@a: pointer
*@b: second pointer
*
*return: (0)
*/

#include "main.h"

void swap_int(int *a, int *b)
{

int c;

c = *a;
*a = *b;
*b = c;
}
