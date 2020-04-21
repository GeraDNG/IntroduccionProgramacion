/*
    Algoritmo para calcular años bisiestos:
    1) Inicio.
    2) Declarar la libreria "stdio.h".
    3) Definir la variable A de tipo int.
    4) Pedir el año y asignarlo a A.
    5) Si A es divisible entre 4 entonces:
        5.1) Si A es divisible entre 100 y entre 400, Mostrar "Es bisiesto".
        5.2) Si A no es divisible entre 100, Mostrar "Es bisiesto".
        5.3) Si A es divisible entre 100 pero no entre 400, Mostrar "No es bisiesto".
    6) Sino Mostrar "No es bisiesto.".
    7) Fin.
*/
#include <stdio.h>
int main()
{
    int A;
    printf("\n Se determinara si el ano es o no bisiesto.");
    printf("\n Dar el ano: ");
    scanf("%i", &A);
    if (A%4==0)
    {
        if (A%100!=0) printf("\n Es bisiesto. \n\n");
        if (A%100==0 && A%400==0) printf("\n Es bisiesto. \n\n");
        if (A%100==0 && A%400!=0) printf("\n No es bisiesto. \n\n");
    }
    else
        printf("\n No es bisiesto. \n\n");
    return 0;
}
