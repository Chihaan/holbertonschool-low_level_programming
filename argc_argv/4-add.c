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
	int i = 1, j = 0, sum = 0;
	(void)argc;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
