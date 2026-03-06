#include <stdio.h>
/**
 * main - Entry of program
 * @argc : Argument count
 * @argv : Pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
