
#include "../include/my.h"

unsigned long fibonacci(int n)
{
    //Cas spécifiques
    if (n == 0)
        return (0);
    else if (n == 1)
        return (1);
    
    //Fibonacci s'apelle lui-même en ajoutant le précédent résultat
    return (fibonacci(n-1) + fibonacci(n-2));
}

void exo_3(void)
{
    int n = 0;
    unsigned long result = 0;

    printf("Entrer n : ");
    scanf("%d", &n);

    //On apelle Fibonacci
    result = fibonacci(n);
    printf("Fibonacci de %d est %lu : F[%d] = %lu\n\n", n, result, n, result); 
}