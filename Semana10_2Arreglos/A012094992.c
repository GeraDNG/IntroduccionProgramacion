#include <stdio.h> //Se declara la biblioteca necesaria para el uso de "printf" y "scanf".
int X, Y, O, n=0, i=0, j=0; //Se definen variables de tipo int.
void opciones () //Comienza "opciones"
{
    //Imprime las opciones disponibles.
    printf("\n 1.- Obtener el promedio. \n 2.- Obtener suma de numeros impares. \n 3.- Obtener suma de numeros pares.");
    printf("\n 4.- Mostrar el cuadrado de cada uno de los numeros.");
    printf("\n 5.- Mostrar la tabla de multiplicar de cada numero dado (del 1 al 10). \n 6.- Salir.");
} //Termina opciones.
void inicializa_arreglo (int arreglo[n]) //Inicia procedimiento "inicializa_arreglo":
{
    //El ciclo for igualara a 0 todos los espacios del arreglo.
    for (i=0; i<n; i++)
    {
        arreglo[i]=0; //Asignara el valor de 0 al arreglo con valor de "i".
    }
} //Fin de "inicializa_arreglo".
void captura_arreglo (int arreglo[n]) //Inicia procedimiento "captura_arreglo":
{
    // El for pedira un valor y lo asignara, proceso repetido para cada espacio del arreglo (9 veces).
    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("\n Dar un valor para la posicion #%i del arreglo: ", i); //Imprime
        scanf("%i", &arreglo[i]); //Guarda valor numerico a cierta posicion del arreglo.
    }
} //Fin de "captura_arreglo".
void imprime_arreglo (int arreglo[n]) //Inicia procedimiento "imprime_arreglo":
{
    printf("\n Para confirmar: \n");
    // El for imprime el valor de cada uno de los arreglos.
    for (i=0; i<n; i++)
    {
        printf("El valor para el arreglo #%i es de: %i \n", i, arreglo[i]);//Imprime el valor del arreglo.
    }
} //Fin de "imprime_arreglo".
void promedio (int arreglo[n]) //Inicia "promedio"
{
    int suma = 0; //Declaracion de "suma" de tipo int con valor de 0.
    for (i=0; i<n; i++)
    {
        suma=suma+arreglo[i]; //Suma sera su antiguo valor más el valor del arreglo en la posicion "i".
    }
    printf("\n El promedio de los numeros dados es de: %i", suma/n); //Imprime el promedio
    printf("\n\n");
} //Fin de "promedio"
void sumatoria_impar(int arreglo[n]) //Inicia "sumatoria_impar"
{
    int suma = 0; //Declaracion de "suma" de tipo int con valor de 0.
    for (i=0; i<n; i++)
    {
        if (arreglo[i]%2!=0) //Si el valor en el espacio "i" del arreglo es impar, entonces
            suma=suma+arreglo[i]; //Suma sera su antiguo valor más el valor del arreglo en la posicion "i".
    }
    printf("\n La sumatoria de numeros impares es de: %i \n\n", suma); //Imprimer el valor de suma.
} //Fin de sumatoria_impar".
void sumatoria_par(int arreglo[n]) //Inicia "sumatoria_par"
{
    int suma = 0; //Declaracion de "suma" de tipo int con valor de 0.
    for (i=0; i<n; i++)
    {
        if (arreglo[i]%2==0) //Si el valor en el espacio "i" del arreglo es par, entonces
            suma=suma+arreglo[i]; //Suma sera su antiguo valor más el valor del arreglo en la posicion "i".
    }
    printf("\n La sumatoria de numeros pares es de: %i \n\n", suma); //Imprimer el valor de suma.
} //Fin de "sumatoria_par".
void cuadrado (int arreglo[n]) //inicia "cuadrado"
{
    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("El cuadrado del arreglo #%i es de: %i \n", i, arreglo[i]*arreglo[i]);//Se imprime el valor del arreglo en "i" multiplicado por si mismo
    }
}//Fin de "cuadrado".
void tabla (int arreglo[n]) //Inicia "tabla":
{
    for (i=0; i<n; i++)
    {
        for (j=0; j<=10; j++)
        {
            printf("\n %i * %i = %i", arreglo[i], j, arreglo[i]*j); //Imprime la multiplicacion del valor del arreglo en "i" por "j"
        }
        printf("\n");
    }
    printf("\n");
} //Fin de "tabla"
int main () //Inicio de "main"
{
    printf("\n Se pedira asignar un numero por cada variable que se requiera."); //Imprime
    printf("\n\n Con este programa se pueden realizar diversas operaciones, como:");
    opciones(); //Muestra el menu de operaciones disponibles.
    printf("\n\n Cuantas variables necesita? \t"); //Pide tamaño del arreglo
    scanf("%i", &n); //Guarda el tamaño en "n"
    int arreglo[n]; //Se crea el arreglo en base a "n" dado
    inicializa_arreglo(arreglo); //Se inicializa en 0
    printf("\n De acuerdo. Por favor de los valores para el arreglo."); //Imprime
    captura_arreglo(arreglo); //SE asignan valores al arreglo
    imprime_arreglo(arreglo); //SE muestran los valores dados
    do {
        printf("\n\n\n Que opcion desea?");//Pide opcion deseada
        opciones(); //Muestra el menu de operaciones disponibles.
        printf("\n------------------------> \t");
        scanf("%i", &O); //Guarda la opcion deseada en la variable "O"
        if (O < 1 || O > 6) //Si "O" es menor a 1 o mayor a 6:
            printf("\n Numero invalido... \n\n"); //Imprime
        else //Sino:
            switch (O) //Inicia Switch en base a "O":
            {
            case 1: //Si O es 1:
                promedio(arreglo); //Se obtiene el promedio
                break;
            case 2: //Si O es 2:
                sumatoria_impar(arreglo); //Se obtiene la sumatoria impar
                break;
            case 3: //Si O es 3:
                sumatoria_par(arreglo); //Se obtiene la sumatoria par
                break;
            case 4: //Si O es 4:
                cuadrado(arreglo); //Se obtiene el cuadrado de cada valor del arreglo
                break;
            case 5: //Si O es 5:
                tabla(arreglo); //Se obtiene las tablas de multiplicar para cada valor del arreglo
                break;
            case 6: //Si O es 6:
                printf("\n Saliendo... \n\n"); //Imprime
                break;
            default:
                printf("\n Error... \n\n"); //IMprime
                break;
            }

    } while (O != 6); //Ciclo DO_WHILE: Mientras que "O" sea distinta de 6
    return 0;
} //Fin del programa.
