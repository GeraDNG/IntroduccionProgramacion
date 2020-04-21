#include <stdio.h> // Se incluyen las bibliotecas
#include <math.h> // Se incluyen por el uso de la potencia.
void menu (void) //Procedimiento que muestra el menu de opciones
{
    printf("\n Opciones disponibles:");
    printf("\n \t 1- Obtener la sumatoria de numeros impares enteros desde N1 hasta N2");
    printf("\n \t 2- Obtener la potencia del primer numero (N1) elevada al segundo (N2)");
    printf("\n \t 3- Obtener la potencia del segundo numero (N2) elevada al primero (N1)");
    printf("\n \t 4- Salir");
}

int sumatoria_impar (int N1, int N2) //funcion sumatoria par
{
    int contador = N1;
    int sumatoria_impar = 0;
    while (contador <= N2)
    {
        if (contador%2!=0)
        {
            sumatoria_impar = sumatoria_impar + contador;
            contador++;
        }
        else if (contador%2==0)
            contador++;
    }
    return sumatoria_impar;
}
int potencia_N1 (int N1, int N2) //funcion potencia #1-
{
    int resultado = pow(N1, N2);
    return resultado;
}
int potencia_N2 (int N1, int N2) //funcion potencia #1
{
    int resultado = pow(N2, N1);
    return resultado;
}
int main ()
{
    int Opcion, N1, N2;
    menu();
    printf("\n Que opcion desea? (Dar el numero del 1 al 4) \n\t");
    scanf("%i", &Opcion);
    switch (Opcion)
    {
        case 1:
        printf("\n Dar el valor del primer numero (N1): ");
            scanf("%i", &N1);
            printf("\n Dar el valor del segundo numero (N2): ");
            scanf("%i", &N2);
            if (N2 < N1)
                printf("\n No se pueden hacer sumatorias...\n\n");
            sumatoria_impar(N1, N2);
            printf("\n La sumatoria de numeros impares enteros desde N1 hasta N2 es de: %i \n\n", sumatoria_impar(N1, N2));
            break;
        case 2:
            printf("\n Dar el valor del primer numero (N1): ");
            scanf("%i", &N1);
            printf("\n Dar el valor del segundo numero (N2): ");
            scanf("%i", &N2);
            potencia_N1(N1, N2);
            printf("\n El resultado seria de: %i \n\n", potencia_N1(N1, N2));
            break;
        case 3:
            printf("\n Dar el valor del primer numero (N1): ");
            scanf("%i", &N1);
            printf("\n Dar el valor del segundo numero (N2): ");
            scanf("%i", &N2);
            potencia_N2(N1, N2);
            printf("\n El resultado seria de: %i \n\n", potencia_N2(N1, N2));
            break;
        case 4:
            printf("\n Saliendo... \n\n");
            break;
        default:
            printf("\n Numero incorrecto... \n\n");
            break;
    }
    return 0;
}
