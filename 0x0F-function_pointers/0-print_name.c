#include <stdlib.h>
#include <stdio.h>
/**
  * print_name - prints a name
  * @name: name parameter
  * @f: a pointer to functions
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
