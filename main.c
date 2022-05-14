#include <stdio.h>
#include "operaciones.h"

int main(){

    int a, b;

    printf("Ingrese un numero a:");
    scanf("%d", &a);
    printf("Ingrese un numero b:");
    scanf("%d", &b);

    if(sumaValida(a, b)) printf("La suma entre a y b es %d\n", suma(a, b));
    else printf("No se puede calcular la suma entre a y b\n");

    if(restaValida(a, b)) printf("La resta entre a y b es %d\n", resta(a, b));
    else printf("No se puede calcular la resta entre a y b\n");

    if(productoValido(a, b)) printf("El producto entre a y b es %d\n", producto(a, b));
    else printf("No se puede calcular el producto entre a y b\n");

    if(divisionEnteraValida(a, b)) printf("La division (entera) entre a y b es %d\n", divisionEntera(a, b));
    else printf("No se puede calcular la division entera entre a y b\n");

    return 0;
}