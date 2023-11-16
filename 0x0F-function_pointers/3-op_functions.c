#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - add two integers
  * @a: integer 1
  * @b: integer 2
  * Return: result of sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substract two ints
  * @a: int 1
  * @b: int 2
  * Return: result of subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two integers
  * @a: int 1
  * @b: int 2
  * Return: results of miltiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of two ints
  * @a: int 1
  * @b: int 2
  * Return: div of two ints
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - get the remeinder
  * @a: int 1
  * @b: int 2
  * Return: rem of two ints
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
