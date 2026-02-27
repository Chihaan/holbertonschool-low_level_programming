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
                        printf("Invalid choice\n");

        switch(choice)
        {
                case 0: 
                        printf("Bye !\n");
                        break;
                case 1: 
                        printf("Entrez les deux nombres que vous voulez additionner: \n");
                        printf("A : ");
                        scanf("%d", &value1);
                        printf("B : ");
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 + value2);
                        break;
                case 2:
                        printf("Entrez les deux nombres que vous voulez soustraire: \n");
                        printf("A : ");
                        scanf("%d", &value1);
                        printf("B : ");
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 - value2);
                        break;
                case 3:
                        printf("Entrez les deux nombres que vous voulez multiplier: \n");
                        printf("A : ");
                        scanf("%d", &value1);
                        printf("B : ");
                        scanf("%d", &value2);
                        printf("Le resultat est: %d\n", value1 * value2);
                        break;
                case 4:
                        printf("Entrez les deux nombres que vous voulez diviser: \n");
                        printf("A : ");
                        scanf("%d", &value1);
                        printf("B : ");
                        scanf("%d", &value2);
                        if (value2 == 0)
                                printf("Erreurr : on ne divise pas par zéro..\n");
                        else
                                printf("Le resultat est: %.1f\n", (float)value1 / (float)value2);
                        break;
        }       
        return (0);
}
