#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Returns sum of two numbers
  * @a: first number
  * @b: second number
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Returns the difference of two numbers
  * @a: First number
  * @b: second number
  *
  * Return: diff of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Returns the multiplication of two numbers
  * @a: First number
  * @b: Second number
  *
  * Return: Product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Returns the division of two numbers
  * @a: First number
  * @b: Second number
  *
  * Return: Quotient of a and b
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
  * op_mod - Returns the remainder of the division of two numbers
  * @a: first number
  * @b: second number
  *
  * Return: remainder of the division of a and b
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

