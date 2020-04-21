#include <stdio.h>
int main ()
{
    int A, B, C;
    printf("\n Se intercambiaran los contenidos de dos variables.");
    printf("\n Dar el valor de la primer variable: ");
    scanf("%i", &A);
    printf("\n Dar el segundo valor: ");
    scanf("%i", &B);
    cambio();
    return 0;
}
int cambio (int A, int B)
{
    int C;
    C = A;
    printf("\n El primer valor quedaria: %i", C);
    C = B;
    printf("\n El segundo valor seria: %i", C);
}
