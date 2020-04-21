/*
    Algoritmo para velocidad:
    1) Inicio.
    2) Declarar biblioteca "stdio.h".
    3) Declarar variables D y T como tipo int.
    4) Pedir valor de tiempo y asignarlo a T.
    5) Pedir valor de distancia y asignarlo a D.
    6) Mostrar la velocidad (D/T).
    7) Fin.
*/

#include <stdio.h>
int main()
{
    int D, T;
    printf("\n Se determinara la velocidad en base a la distancia y tiempo dado");
    printf("\n Introducir el tiempo empleado en segundos: ");
    scanf("%i", &T);
    if (T <= 0)
    {
        printf("\n EL tiempo debe de ser una cantidad positiva. Dar nuevamente: ");
        scanf("%i", &T);

    }
    printf("\n Introducir la distancia en metros: ");
    scanf("%i", &D);
    printf("\n La velocidad es de: %i metros/segundos.", D/T);
    return 0;
}
