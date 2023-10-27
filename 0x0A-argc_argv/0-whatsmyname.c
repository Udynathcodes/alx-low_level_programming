#include <stdio.h>

/**
  * main - Driver code
  * @argv: contains command line arguments
  * @argc: an array count
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}

	return (0);
}
