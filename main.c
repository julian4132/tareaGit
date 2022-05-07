#include <stdio.h>
#include "operaciones.h"

int main(){

    int a, b;

    printf("Ingrese un numero a:");
    scanf("%d", &a);
    printf("Ingrese un numero b:");
    scanf("%d", &b);

    printf("La suma entre a y b es %d\n", suma(a, b));
    printf("La diferencia entre a y b es %d\n", resta(a, b));

    return 0;
}