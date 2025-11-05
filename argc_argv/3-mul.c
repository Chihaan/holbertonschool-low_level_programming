#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
