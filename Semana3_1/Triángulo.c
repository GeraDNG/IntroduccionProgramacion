/*
    Algoritmo para determinar la forma de un triangulo:
    1) Inicio.
    2) declarar libreria "stdio.h".
    3) Definir A, B y C como variable tipo int.
    4) Pedir un valor y asignarlo a A.
    5) Pedir un valor y asignarlo a B.
    6) Pedir un valor y asignarlo a C.
    7) Si la suma de A+B es mayor a C y la suma de B+C es mayor a A y la suma de A+C es mayor a B; Mostrar "Si puede ser triangulo".
    8) Si A es igual a B, B es igual a C y C es igual a A; Mostrar "es un triangulo equilatero".
    9) Si A es diferente de B, B es diferente de C y C es diferente de A; Mostrar "es un triangulo isosceles".
    10) Si A es igual a B y B es igual a C o B es igual a A y A es igual a C o A es igual a C y C es igual a B; Mostrar "triangulo escaleno".
    11) Fin.
*/
#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Dados tres numeros, se determinara si puede ser un triangulo o no y de que tipo.");
    printf("\n Dar el primer numero: ");
    scanf("%i", &A);
    printf("\n Dar el segundo numero: ");
    scanf("%i", &B);
    printf("\n Dar el tercer numero: ");
    scanf("%i", &C);
    if (A < (B+C) && B < (A+C) && C < (A+B))
    {
        printf("\n Si puede ser un triangulo");
        if (A != B && B != C && C != A)
            printf(" y es un triangulo isosceles.\n\n");
        if (A == B && B == C || B == A && A == C || A == C && C == B)
            printf(" y es un triangulo escaleno.\n\n");
        if (A == B && B == C && C == A)
            printf(" y es un triangulo equilatero.\n\n");
    }
    else printf("\n No puede ser un triangulo.");
    return 0;

}
