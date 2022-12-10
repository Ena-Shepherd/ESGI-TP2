
#include "../include/my.h"

//Si delta == 0
void deltazero(float a, float b) {
    float x = (b*-1) * (a*2);
    printf("Solution unique: %.2f\n", x);
}

//Si delta > 0
void deltapos(float a, float b, float delta) {
    float x1, x2;
    
    x1 = (b*-1 -sqrt(delta)) / (2*a);
    x2 = (b*-1 +sqrt(delta)) / (2*a);
    printf("Deux Solutions: %2.f %2.f\n", x1, x2);
}

void exo_1(void)
{
    float a, b, c, delta = 0;

    //Affichage et assignation
    printf("\nEntrer A: ");
    scanf("%f", &a);

    //Gestion d'erreur sur A
    if (a == 0) {
        printf("A ne peut pas être égal à 0\n");
        exit(84);
    }

    printf("Entrer B: ");
    scanf("%f", &b);
    printf("Entrer C: ");
    scanf("%f", &c);

    delta = (b*b) - (4*a*c);
    printf("\nA %.2f, B %.2f, C %.2f, Delta %.2f\n", a, b, c, delta);

    //Choix du calcul selon Delta
    if (delta < 0)
        printf("Aucune solution réelle\n\n");   
    else if (delta == 0)
        deltazero(a, b);
    else
        deltapos(a, b, delta);
}