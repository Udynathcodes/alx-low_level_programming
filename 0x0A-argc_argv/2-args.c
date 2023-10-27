#include <stdio.h>

/**
  * main -program that print all arguments
  * @argc: argument count
  * @argv: array of argument
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
