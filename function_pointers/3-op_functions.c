#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds two integers
 * @a : First Number
 * @b : Second number
 * Return: Result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substract two integers
 * @a : First Number
 * @b : Second number
 * Return: Result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a : First Number
 * @b : Second number
 * Return: Result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a : First Number
 * @b : Second number
 * Return: Result of the operation
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
 * op_mod - Return the reminder of two integers
 * @a : First Number
 * @b : Second number
 * Return: Result of the operation
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
