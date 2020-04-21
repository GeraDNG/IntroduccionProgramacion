// Se incluyen las bibliotecas:
#include <stdio.h> // Se incluye para el uso del "printf" y "scanf"
#include <math.h>  // Se incluye para el uso del "pow"
float potencia (int x, int n) // Se declara la función "potencia"
{
    float potencia; // Se declara "potencia" como variable de tipo float.
    potencia = pow(x, n); // "potencia" será igual al valor de "n" elevada a la 1/"x"
    return potencia; // Se regresa el valor de "potencia"
}
float sumatoria (int n) // Se declara la función "sumatoria"
{
    int i=1, n1=5, n2=2; // Se definen variables
    float sumatoria=0;   // Se definen variables
    while (i <= n)       // Comienza ciclo while
    {                                                  //potencia llama a la funcion potencia anterior
        sumatoria = sqrt(3*i/4)/sqrt(potencia(i, n1))-potencia(i, n2)+1; //sqrt es raiz cuadrada.
        i++; // se suma un uno al valor de la variable i
    }
    return sumatoria; //Regresa el valor de sumatoria
}
int main() //Función "main"
{
    int o, x, n, i; //declaracion de variables
    printf("\n FUNCIONES:");
    printf("\n \t 1. Potencia.");
    printf("\n \t 2. Evaluar sumatoria.");
    printf("\n \t 3. Salir.");
    printf("\n Que opcion desea? ");
    scanf("%i", &o); // Se guarda en la variable "o" la opcion deseada
    switch (o)
    {
    case 1:
    {
        printf("\n Dar el valor de la base: ");
        scanf("%i", &x);
        printf("\n Dar el valor de la potencia: ");
        scanf("%i", &n);
        potencia(x, n); // Se llama a la funcion potencion
        printf("El resultado seria: %f\n\n", potencia(x, n));
        break;
    }
    case 2:
    {
        printf("\n Dar el valor del limite: ");
        scanf("%i", &n);
        sumatoria(n); // llamada a funcion sumatoria
        printf("El resultado seria %f\n\n", sumatoria(n));
        break;
    }
    case 3:
        printf("\n Apagando...\n\n");
        break;
    default:
        printf("\n Numero incorrecto.\n\n");
        break;
    }
    return 0; //Fin
}
