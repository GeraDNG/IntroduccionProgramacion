/*
    Algoritmo para determinar el numero mayor entre dos digitos:
    1) Inicio.
    2) Declarar biblioteca "stdio.h".
    3) Definir A y B como variables tipo int.
    4) Pedir valor y asignarlo a A.
    5) Pedir valor y asignarlo a B.
    6) Si A es igual a B, Mostrar "Los numeros son iguales".
    7) Si A es mayor a B, Mostrar el primer numero es mayor al segundo.
    8) Si B es mayor a A, Mostrar el segundo numero es mayor al primero.
    9) Fin.
*/
#include <stdio.h>
int main ()
{
    int A, B;
    printf("Se determinara que numero es mayor.");
    printf("\n Dar el primer numero: ");
    scanf("%i", &A);
    printf("\n Dar el segundo numero: ");
    scanf("%i", &B);
    if (A == B)
    {
        printf("\n Los numeros son iguales.");
    }
    if (A > B)
    {
        printf("\n El primer numero es mayor al segundo");
    }
    if (B > A)
    {
        printf("\n El segundo numero es mayor al primero");
    }
    return 0;
}
