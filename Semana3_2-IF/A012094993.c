
/*
    Algoritmo temperatura:
    1) Inicio.
    2) Declarar biblioteca "stdio.h".
    3) Definir a "T" como variable de tipo "int".
    4) Mostrar "Por favor introducir la temperatura actual en grados centigrados: ".
    5) Si T < -273, Mostrar "La temperatura no existe.".
    6) Si T >= 100, Mostrar "Vapor".
    7) Si T >= -273 y T < 0, Mostrar "Congelada".
    8) Si T >= 0 y T < 30, Mostrar "Fria".
    9) Si T >= 30 y T < 100, Mostrar "Caliente".
    10) Fin.
*/

#include <stdio.h>
int main ()
{
    int T;
    printf("\n Por favor introducir la temperatura actual en grados centigrados: ");
    scanf("%i", &T);
    if (T < -273)
        printf("\n \t La temperatura no existe.\n\n");
    else if (T >= 100)
        printf("\n \t Vapor.\n\n");
    else if (T >= -273 && T < 0)
        printf("\n \t Congelada.\n\n");
    else if (T >= 0 && T < 30)
        printf("\n \t Fria.\n\n");
    else if (T >= 30 && T < 100)
        printf("\n \t Caliente.\n\n");
    return 0;
}
