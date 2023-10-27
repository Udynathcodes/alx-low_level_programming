#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that print the products of two arg
  * @argc: arguments count
  * @argv: array of arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
