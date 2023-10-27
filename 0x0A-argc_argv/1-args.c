#include <stdio.h>

/**
  * main -program that print number of arguments
  * @argc: argument counts
  * @argv: array of arguments passed
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
