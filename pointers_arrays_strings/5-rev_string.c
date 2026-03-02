#include "main.h"
/**
 * rev_string - Revert a string
 * @s : The string
 * Return: Nothing
 */
void rev_string(char *s)
{
	char *end = s, tmp;
/*Je crée un pointeur pour l'emmener a la fin et un tmp*/
	while (*end)
		end++;
	end--;
/*Je recule d'un car end est sur '\0'*/
	while (s < end)
	{
		tmp = *s;
/*On met s dans tmp pour ne pas perdre sa valeur*/
		*s = *end;
		*end = tmp;
/*On met end dans s et tmp(s) dans end*/
		s++;
		end--;
/*On avance le pointeur du début et recule celui de la fin*/
	}
}
