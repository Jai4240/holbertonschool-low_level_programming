#include "stdlib.h"
#include "stdio.h"

/**
 * main - start of program
 *
 * Description: prints the name of the file it is compiled from
 * Return: return (0) is the required function signature
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
