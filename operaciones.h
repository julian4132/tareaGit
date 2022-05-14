#ifndef __OPERACIONES_H__
#define __OPERACIONES_H__

#include <stddef.h>

/*
 * Decide si realmente se puede calcular la suma entre a y b
 */
int sumaValida(int a, int b);

/*
 * Calcula la suma de dos números enteros
 */
int suma(int a, int b);

/*
 * Decide si realmente se puede calcular la resta entre a y b
 */
int restaValida(int a, int b);

/*
 * Calcula la resta de dos números enteros
 */
int resta(int a, int b);

/*
 * Decide si realmente se puede calcular el producto entre a y b
 */
int productoValido(int a, int b);

/*
 * Calcula el producto de dos números enteros
 */
int producto(int a, int b);

/*
 * Decide si realmente se puede calcular la division entera entre a y b
 */

int divisionEnteraValida(int a, int b);

/*
 * Calcula la división entera de dos números enteros
 */
int divisionEntera(int a, int b);


#endif