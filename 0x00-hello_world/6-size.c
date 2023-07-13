#include <stdio.h>
/**
 * main - main fucntion
 *
 * REturn: always 0
 */
int main(void)
{
	pritnf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}	
