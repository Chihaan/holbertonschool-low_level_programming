#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc : Argument count
 * @argv : Argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int value1, value2 = 0, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(argv[1]);
	value2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	result = f(value1, value2);

	printf("%d\n", result);

	return (0);
}
