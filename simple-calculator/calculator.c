#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
        int choice, value1, value2;

        printf("Bienvenue dans calculator 5000 !\n");
        printf("1) Addition \n"
                "2) Soustraction \n"
                "3) Multiplication \n"
                "4) Division \n"
                "0) Quitter \n");
        scanf("%d", &choice);
                if (choice < 0 || choice > 4)
                        printf("Veuillez entrer un nombre\n");

        switch(choice)
        {
                case 0: 
                        printf("Au Revoir !\n");
                        break;
                case 1: 
                        printf("Entrez les deux nombres que vous voulez additionner: \n");
                        scanf("%d", &value1);
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 + value2);
                        break;
                case 2:
                        printf("Entrez les deux nombres que vous voulez soustraire: \n");
                        scanf("%d", &value1);
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 - value2);
                        break;
                case 3:
                        printf("Entrez les deux nombres que vous voulez multiplier: \n");
                        scanf("%d", &value1);
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 * value2);
                        break;
                case 4:
                        printf("Entrez les deux nombres que vous voulez diviser: \n");
                        scanf("%d", &value1);
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 / value2);
                        break;
        }       
        return (0);
}
