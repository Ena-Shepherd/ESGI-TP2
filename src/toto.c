#include <stdio.h>
#include <stdlib.h>

int divide(int number1, int number2, float *result) {

  if (number2 == 0)
    return -1;
  *result = (float)number1 / (float)number2;
  return 0;
}

int main(int ac, char **av) {

  if (ac != 3)
    return -1;

  int nb1 = atoi(av[1]);
  int nb2 = atoi(av[2]);
  float result;

  if (divide(nb1, nb2, &result) == -1) {
    printf("YOU CAN'T DIVIDE BY ZERO !\n");
    return -1;
  }
    printf("Result = %.2f\n", result);

  return 0;
}