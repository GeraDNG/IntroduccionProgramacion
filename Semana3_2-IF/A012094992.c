/*
    Algoritmo:
    1) Inicio.
    2) Declarar biblioteca "stdio.h" y "math.h".
    2) Definir como float la variable X.
    3) Mostrar procedimientos a llevar.
    4) Pedir X.
    5) Si X < -2 entonces Mostrar: 2*X*X+4*X+2.
    6) Si X < 0 y X >= -2 entonces Mostrar: 2.
    7) Si X >= 0 entonces Mostrar: 3*X+1.
    8) Fin.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float X;
    printf("\n Dar un valor numerico que se evaluara de la siguiente forma: ");
    printf("\n \t 2x^2+4x+2 si x es menor a -2.");
    printf("\n \t 2 si x es menor a 0 y mayor o igual a -2.");
    printf("\n \t 3x+1 si x es mayor o igual a cero.\n ");
    scanf("%f", &X);
    if (X < -2)
        printf("%f", 2*pow(X, 2)+4*X+2);
    else if (X < 0 && X >= -2)
        printf("2.");
    else if (X >= 0)
        printf("%f", 3*X+1);
    return 0;
}
