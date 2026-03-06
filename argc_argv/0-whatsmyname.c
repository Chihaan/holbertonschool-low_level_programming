#include <stdio.h>
#include "main.h"
#define UNUSED(argc) (int)(argc)
/**
 * main - Entry of program
 * @argc : Argument count
 * @argv : Pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", *argv);
}
