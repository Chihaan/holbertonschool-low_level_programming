#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	float f;
	long l;
	long long ll;
  
	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %ld\n", (long)sizeof(l));
	printf("Size of a long long int: %lld\n", (long long)sizeof(ll));
	printf("Size of a float: %lu\n", sizeof(f));

	return (0);
}
