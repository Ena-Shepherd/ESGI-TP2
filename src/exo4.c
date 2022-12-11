
#include "../include/my.h"

void exo_4(void)
{
    int n = 1;
    float on = 1;

    printf("Entrer N: ");
    scanf("%d", &n);

    //Génération des calculs
    for(int i = 1; i != n+1; i++) {
        //On passe outre la division Euclidienne
        on = (1. * fibonacci(i+1)) / (1.* fibonacci(i));

        //Exception pour la dernière ligne
        if (i != n)
            printf("\tO[%d] = %.2f\n", i, on);
        else
            printf("Le résultat de O[%d] est %.2f\n", i, on);
    }
    //Affichage de la constante Phi
    printf("Le nombre d’or est égal à : 1.62\n(arrondi à 2 chiffres après la virgule)\n\n");
}