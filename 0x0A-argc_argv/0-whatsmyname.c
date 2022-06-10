#include "main.h"
#include <stdio.h>

/**
  * main - Entry Point
  * @argc: number of arguments total
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc __attribute__((unused)), char **argv)
{
	char *name;

	if (argv[1])
		name = argv[1];
	else
		name = argv[0];

	printf("%s\n", name);
	(void)argc;
	return (0);
}
