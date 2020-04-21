// Se incluyen las librerias:
#include <stdio.h> // Necesaria para el "scanf" y el "printf".
#include <stdlib.h> // Necesaria para la función de numeros aleatorios.
#include <time.h> // Necesaria en la función de numeros aleatorios en "time(0)".
#include <math.h> // Necesaria para el uso de "sqrt" y "pow".
// Se declaran las variables:
int n, i; // Variables de tipo "int" para almacenar el limite y contador.
char o; // Variable de tipo "char" para almacenar la opción deseada.
// Inicio proceso "opciones":
void opciones (void)
{
    printf("\n Estas son las opciones:"); // "Printf" para mostrar en la consola el mensaje
    printf("\n \t a. Numeros aleatorios");// Todos los mensajes conforman el menú de opciones disponibles.
    printf("\n \t b. Funcion G");
    printf("\n \t s. Salir");
}
// Inicio función "numeros_aleatorios":
int numeros_aleatorios ()
{
    srand(time(0)); // Se fija la semilla para la función "rand".
    for (i=1; i<51; i++) // Inicio ciclo for.
    {
        printf("Numero Aleatorio #%i: %i \n", i, rand()%21); // Se imprimirá el número de vuelta y un número aleatorio.
    }
    return; // Finaliza la función "numeros_aleatorios".
}
// Inicia la función "sumatoria":
int sumatoria (int n)
{
    n=n+1; // Se le suma un 1 al valor anterior de "n".
    int i=3; // Se declara "i" como variable tipo int, con valor inicial de 3. Sirve de contador.
    for (i=3; i<n; i++) //Inicio ciclo for.
    {
        printf("\n El resultado para %i es: %f \n", i, (sqrt(i-2))/(pow(i, 2))); // Se imprimirá el valor de "i" y resultado.
    }
    return; // Finaliza la función "sumatoria".
}
// Inicio de la función "main", función principal:
int main ()
{
    do // Inicio ciclo Do-While:
    {
        opciones(); // Llamar a procedimiento "opciones" para desplegar el menú.
        printf("\n \n Que opcion desea? (Dar la letra minuscula del inciso) \n\t"); // Se pregunta por la opción deseada.
        scanf("%c%*c", &o); // Se escanea la opción deseada y se almacena en la variable "o".
        switch (o) // Inicio Switch:
        {
        case 'a': // Para el caso de haber seleccionado la letra "a":
            numeros_aleatorios(); // Se llama a la función "numeros_aleatorios".
            break; // Finaliza el paso para la letra "a".
        case 'b': // Para el caso de haber seleccionado la letra "b":
            printf("\n Dar el valor del limite (mayor a 3): "); // Se pide el valor para "n".
            scanf("%i", &n); // Se escanea el valor dado a "n".
            if (n >= 3) // Si n es mayor o igual que 3:
                sumatoria(n); // Se llamará a la función "sumatoria".
            else if (n < 3) // Si "n" es menor a 3:
                printf("\n Numero invalido... \n\n"); // Se imprime mensaje de número inválido.
             break; // Finaliza el paso para la letra "b".
        case 's': // Para el caso de haber seleccionado la letra "s":
            printf("\n Saliendo... \n \n"); // Se imprime mensaje de "Saliendo...".
            break; // Finaliza el paso para la letra "s".
        default: // Si no se selecciona ninguna de las letras anteriores, se llega aquí.
            printf("\n Letra incorrecta... \n\n"); // Imprime el mensaje de "letra incorrecta".
            break; // Finaliza el paso.
        } // Fin de Switch.
    } while (o != 's'); // Condición del ciclo Do-While.
    return 0; // Finaliza el programa.
} // Finaliza "main".
