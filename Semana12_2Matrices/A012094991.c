#include <stdio.h> // Necesaria para el "scanf" y el "printf".
#include <stdlib.h> // Necesaria para la función de numeros aleatorios.
#include <time.h> // Necesaria en la función de numeros aleatorios en "time(0)".
#define RENGLONES_MAX 10 //Se establece que "RENGLONES_MAX" tendrá un valor de 10.
#define COLUMNAS_MAX 10 //Se establece que "COLUMNAS_MAX" tendrá un valor de 10.
void menu () //Aquí se imprime el menú de opciones.
{
    printf("\n MENU DE OPCIONES:\n 1. Llena matriz.\n 2. Imprime matriz.\n");
    printf(" 3. Cuenta positivos en la matriz.\n 4. Suma Diagonal.\n 5. Mayor.\n");
    printf(" 6. Salir.");
}
void llena_matriz (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Con esto llenaremos de datos la matriz
{
    int i=0, j=0; //Se inicializan los contadores a 0.
    srand(time(0)); // Se fija la semilla para la función "rand".
    for (i=0; i<10; i++) //Se hará ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++) //Se hará ciclo for por 10 vueltas.
        {
            matriz [i][j] = (rand()%21)-10; //matriz en posición "i" con "j" será igual a un número aleatorio.
        }
    }
}
void imprime_matriz (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Con esto se imprimen los valores de la matriz.
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    printf("\n");//Imprime un salto de línea.
    for (i=0; i<10; i++) //Se hará ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++){ //Se hará ciclo for por 10 vueltas.
            printf("%i\t", matriz[i][j]);//Imprime el valor de la matriz en la posición "i" con "j".
        }
        printf("\n");//Imprime un salto de línea.
    }
}
int cuenta_positivos (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Se contará la cantidad de números positivos.
{
    int suma=0, i=0, j=0; //Se inicializan las variables de tipo int a 0.
    for (i=0; i<10; i++) //Se hará ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++) //Se hará ciclo for por 10 vueltas.
        {
            if (matriz[i][j]>0) //Si el valor de la matriz en la posición "i" con "j" es mayor o igual a cero
                suma=suma+1; //"suma" valdrá su antiguo valor más uno.
        }
    }
    return suma; //Regresa el valor de números positivos
}
int suma_diagonal (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Sumará las cantidades de la diagonal de la matriz.
{
    int suma=0, i=0, j=0; //Se inicializan las variables de tipo int a 0.
    for (i=0; i<10;i++)//Se hará ciclo for por 10 vueltas.
    {
        j=i;
        suma=suma+matriz[i][j]; //"suma" sera igual a "suma" más el valor de la matriz en la posición "i" con "j+i".
    }
    return suma; //Se regresa el valor de "suma".
}
int mayor (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Determinará el número más grande de la matriz.
{
    int nummayor=matriz[0][0], i=0, j=0;//Se inicializan las variables de tipo int a 0.
    for (i=0; i<10; i++)//Se hará ciclo for por 10 vueltas.
    {
        for (j=0;j<10;j++)//Se hará ciclo for por 10 vueltas.
        {
            if (matriz[i][j]>=nummayor) //Si el valor de la matriz en la posición "i" con "j" es mayor a "nummayor" entonces
                nummayor=matriz[i][j];//"nummayor" será su antiguo valor más el valor de la matriz en la posición "i" con "j".
        }
    }
    printf("\n El mayor numero encontrado fue: %i \n", nummayor); //Imprime.
    return nummayor; //Se regresá el valor final de "nummayor".
}
int main ()
{
    int O=0, npositivos=0, suma=0, nummayor=0; //Se inicializan las variables de tipo int a 0.
    int matriz[RENGLONES_MAX] [COLUMNAS_MAX]; //Se declara la matriz
    do //Inicio cilo Do-While:
    {
        menu(); //Llama a procedimiento "menu" que mostrará el menú de operaciones en la pantalla.
        printf("\n Que opcion desea?\t"); //Imprime
        scanf("%i", &O); //Escanea y guarda el valor en la variable "O".
        switch (O) //Inicia switch con base en "O":
        {
        case 1: //Si "O" es igual a 1, entonces:
            llena_matriz(matriz); //Llama a procedimiento "llena_matriz".
            break; //Fin, en caso de que "O" sea 1.
        case 2: //Si "O" es igual a 2, entonces:
            imprime_matriz(matriz); //Llama a procedimiento "imprime_matriz".
            break; //Fin, en caso de que "O" sea 2.
        case 3: //Si "O" es igual a 3, entonces:
            npositivos=cuenta_positivos(matriz); //"npositivos" será igual a lo que regrese la función "cuenta_positivos".
            printf("\n El numero de elementos positivos (mayor a cero) es de: %i \n", npositivos); //Imprime.
            break; //Fin, en caso de que "O" sea 3.
        case 4: //Si "O" es igual a 4, entonces:
            suma=suma_diagonal(matriz); //"suma" será igual a lo que regrese la función "suma_diagonal".
            printf("\n La suma de la diagonal es de: %i \n", suma); //Imprime.
            break; //Fin, en caso de que "O" sea 4.
        case 5: //Si "O" es igual a 5, entonces:
            nummayor=mayor(matriz); //"nummayor" será igual a lo que regrese la función "mayor".
            break; //Fin, en caso de que "O" sea 5.
        case 6: //Si "O" es igual a 6, entonces:
            printf("\n Saliendo... \n\n"); //Imprime.
            break; //Fin, en caso de que "O" sea 6.
        default: //Si el valor de "O" es distinto a los anteriores:
            printf("\n Error! \n\n"); //Imprime.
            break;
        }
    } while (O!=6); //El ciclo DoWhile se hará mientras que "O" sea distinto de 6 (salir).
    return 0;
}//Fin del programa.
