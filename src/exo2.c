
#include "../include/my.h"

void exo_2(void)
{
    float un = 2;
    int i = 0;

    //On rentre le nombre d'itérations
    printf("Entrer n : ");
    scanf("%d", &i);

    printf("\tU0 = 2\n");

    //Calcul et affichage dans la boucle
    for(int u = 0; u != i-1; u++) {
        un = (1./2.) * (un + (2./un));
        printf("\tU%d = %.2f\n", u+1, un);
    }

    //Formatage du dernier élément
    un = (1./2.) * (un + (2./un));

    printf("Le résultat de U[%d] est %.2f\n", i, un);
    printf("Cette suite tend vers le résultat positif de la résolution de l'équation (x^2 - 2) qui est %.2f\n\n", un);
}