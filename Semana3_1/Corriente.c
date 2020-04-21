/*
    Algoritmo para calcular la corriente:
    1) Inicio.
    2) Declarar libreria "stdio.h".
    3) Declarar a V y a R como variables tipo int.
    4) Pedir voltaje.
    5) Pedir resistencia.
    6) Si resistencia es igual a 0 entonces Pedirlo nuevamente.
    7) Mostrar voltaje entre resistencia.
    8) Fin.
*/

#include <stdio.h>
int main()
{
    int V, R;
    printf("\n Se calculara la corriente.");
    printf("\n Dar el voltaje: ");
    scanf("%i", &V);
    printf("\n Dar la resistencia: ");
    scanf("%i", &R);
    if (R == 0)
    {
        printf("\n El numero no puede ser cero. Dar nuevamente: ");
        scanf("%i", &R);
        printf("\n La corriente es de: %i \n\n", V/R);
    }
    else
    {
        printf("\n La corriente es de: %i \n\n", V/R);
    }

    return 0;
}
