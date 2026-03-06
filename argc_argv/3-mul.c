#include <stdio.h>
/**
 * _atoi - Change a char into int
 * @s : the string
 * Return: Char into int
 */
int _atoi(char *s)
{
	int sign = 1, find = 0;
	unsigned long result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + *s - '0';
			find = 1;
		}
		else if (find == 1)
			break;
		s++;
	}
	return (result * sign);
}
/**
 * main - Entry of program
 * @argc : Argument count
 * @argv : Pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1, value1 = 0, value2 = 0;
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

		value1 = _atoi(argv[i]);
		value2 = _atoi(argv[i + 1]);

	printf("%d\n", value1 * value2);

	return (0);
}
