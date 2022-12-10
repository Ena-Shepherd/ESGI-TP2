
#include "../include/my.h"

void menu(void)
{
    int request;

    while(1) {
        printf("Quel exercice souhaitez vous compiler ?\n\
            1.exo1\n\
            0.quitter\n"
        );
        scanf("%d", &request);
        switch (request) {
            case 0:
                exit(0);
            break;
            case 1:
                exo_1();
                request = '0';
            break;
            default:
                exit(84);
            break;
        }
    }
}