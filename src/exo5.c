
#include "../include/my.h"

int exo_5(void)
{
    int nb = 0;
    int max = 3;
    int cmpt = 0;
    int d[3] = {0, 0, 0};
    int keep[3] = {0, 0, 0};

    printf("Combien de parties voulez-vous jouer : ");

    scanf("%d", &nb);
    srand(time(NULL));

    for(int i = 0; i != nb; i++) { //roll turn loop

        for (int j = 0; j < max ; j++) { //assign values

            d[j] = (rand() % 5 ) + 1;
            printf("%d ", d[j]);
            if (d[j] == 4 ) {
                keep[0] = 4;
            }
            if (d[j] == 2 ) {
                keep[1] = 2;
            }
            if (d[j] == 1 ) {
                keep[2] = 1;
            }
           
        }
        if (keep[0] != 0)
            printf("%d ", keep[0]);
        if (keep[1] != 0)
            printf("%d ", keep[1]);
        if (keep[2] != 0)
            printf("%d", keep[2]);
        printf("\n");
    }

}
