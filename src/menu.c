
#include "../include/my.h"

void menu(void)
{
    int request;

    while(1) {
        printf("Quel exercice souhaitez vous compiler ?\n\
    1.exo1      2.exo2\n\
    3.exo3      4.exo4\n\
                0.quitter\n"
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