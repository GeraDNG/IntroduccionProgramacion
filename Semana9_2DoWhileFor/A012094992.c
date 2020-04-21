#include <stdio.h> // Se incluye libreria para el uso de "printf" y "scanf".
int O, n, i=1, res=0; // Se declaran variables.
// Inicia proceso "opciones":
void opciones (void)
{
    printf("\n Estas son las opciones disponibles:"); // Imprimirá en la consola.
    printf("\n 1.- Obtener suma de enteros consecutivos del 1 hasta un numero entero n.");
    printf("\n 2.- Obtener la tabla de multiplicar (del 1 al 10) de un numero n.");
    printf("\n 3.- Obtener la cantidad de digitos entre el 1 y un numero n.");
    printf("\n 4.- Salir.");
} // Fin de "opciones".
// Inicia función "sumatoria":
int sumatoria (int n)
{
    do // Inicio ciclo Do-While:
    {
        res=res+i; // "res" será igual al antiguo valor de "res" más 1.
        i++; // Incremento de "i" más 1.
    }   while (i <= n); // Fin del ciclo. Mientras que "i" sea menor o igual a "n".
    printf("\n El valor de la sumatoria de todos los enteros, desde 1 hasta n, es de: %i \n\n", res); // Imprime "res".
    return; // Finaliza "sumatoria".
}
// Inicia función "tabla":
int tabla (int n)
{
    for (i=1; i<=10; i++) // Inicia ciclo For.
    {
        printf("\n %i * %i = %i", i, n, i*n); // Imprimirá.
    } // Fin del ciclo.
    printf("\n");
    return; // Fin de "tabla".
}
// Inicia función "digitos":
int digitos (int n)
{
    for (i=1; i<=n; i++) // Inicia ciclo For:
    {
        res = i; // "res" será igual a "i".
    } // Fin del ciclo.
    printf("\n La cantidad de digitos es de: %i", res); // Imprime "res".
    return;
} // Fin de "digitos".
// Inicia función "main". Función principal.
int main ()
{
    do // Inicio ciclo Do-While:
    {
        opciones(); // Llamada a "opciones".
        printf("\n Dar el numero de la opcion deseada: \t"); // Se pide el valor de "O".
        scanf("%i", &O); // Se guarda el valor de "O".
        switch (O) // Inicio del Switch con "O":
        {
        case 1: // Inicio del caso 1:
            printf("\n Dar el valor para n: \t"); // Se pide el valor de "n".
            scanf("%i", &n); // Se guarda el valor de "n".
            if (n < 1) // Si "n" es menor a uno:
                printf("\n Numero invalido, debe de ser igual o mayor a 1. \n\n"); // Imprime.
            else if (n >= 1) // Si "n" es mayor o igual a 1:
                sumatoria(n); // Se llama a "sumatoria".
            break; // Finaliza caso 1.
        case 2: // Inicio del caso 1:
            printf("\n Dar el valor para n: \t"); // Se pide el valor de "n".
            scanf("%i", &n); // Se guarda el valor de "n".
            if (n < 1) // Si "n" es menor a uno:
                printf("\n Numero invalido, debe de ser igual o mayor a 1. \n\n"); // Imprime.
            else if (n >= 1) // Si "n" es mayor o igual a 1:
                tabla(n); // Se llama a "tabla".
            break; // Finaliza caso 2.
        case 3: // Inicio del caso 1:
            printf("\n Dar el valor para n: \t"); // Se pide el valor de "n".
            scanf("%i", &n); // Se guarda el valor de "n".
            if (n < 1) // Si "n" es menor a uno:
                printf("\n Numero invalido, debe de ser igual o mayor a 1. \n\n"); // Imprime.
            else if (n >= 1) // Si "n" es mayor o igual a 1:
                digitos(n); // Se llama a "digitos".
            break; // Finaliza caso 3.
        case 4: // Inicio del caso 1:
            printf("\n Saliendo... \n\n"); // Imprime.
            break; // Finaliza caso 4.
        default: // Inicio caso default. Cuando no se cumple un caso anterior:
            printf("\n El numero de opcion es incorrecto. \n\n"); // Imprime.
            break; // Fin del caso.
        } // Fin del Switch.
    } //Fin del ciclo
    while (O != 4); // Mientras que "O" sea distinto de 4.
    return 0;// Fin del programa.
}
