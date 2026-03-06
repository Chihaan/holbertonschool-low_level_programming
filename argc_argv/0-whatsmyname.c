#include <stdio.h>
#include "main.h"
/**
 * main - Entry of program
 * @argc : Argument count
 * @argv : Pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
}
