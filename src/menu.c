
#include "../include/my.h"

void menu(void)
{
    int request;

    while(1) {
        printf("Quel exercice souhaitez vous compiler ?\n\n1.exo1 - Résoudre une équation du second degré\n2.exo2 - Programmer une suite\n3.exo3 - Fibonacci\n4.exo4 - Le nombre d’or & Fibonacci\n\n0.quitter\n"
        );
        scanf("%d", &request);
        switch (request) {
            case 0:
                exit(0);
            break;
            case 1:
                exo_1();
            break;
            case 2:
                exo_2();
            break;
            case 3:
                exo_3();
            break;
            case 4:
                exo_4();
            break;
            default:
                exit(84);
            break;
        }
    }
}