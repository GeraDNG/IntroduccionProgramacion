#include <stdio.h>
int main ()
{
    int A, B;
    printf("\n Dado los dos numeros de la fichas, superior e inferior, determinar el número asociado según la figura anterior.");
    printf("\n\n Dar el numero de la parte superior: ");
    scanf("%i", &A);
    printf("\n Dar el numero de la parte inferior: ");
    scanf("%i", &B);
    if (A == B)
    {
        switch (A)
        {
        case 0: printf("\n La posicion es: 0 \n\n"); break;
        case 1: printf("\n La posicion es: 7 \n\n"); break;
        case 2: printf("\n La posicion es: 13 \n\n"); break;
        case 3: printf("\n La posicion es: 16 \n\n"); break;
        case 4: printf("\n La posicion es: 22 \n\n"); break;
        case 5: printf("\n La posicion es: 25 \n\n"); break;
        case 6: printf("\n La posicion es: 27 \n\n"); break;
        }
    }

    return 0;
}
