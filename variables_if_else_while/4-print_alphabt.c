#include <stdio.h>
/**
 * main - Entry point
 * Declaration de ch
 * Boucle for pour print l'alphabet
 * Condition if pour eviter les valeurs e et q
 * Putchar de retour a la ligne
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ch;

	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch != 'e' && ch != 'q')
				putchar(ch);
		}
		putchar('\n');
	}
	return (0);
}
