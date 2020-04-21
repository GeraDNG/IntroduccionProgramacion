#include <stdio.h> // Necesaria para el "scanf" y el "printf".
#include <stdlib.h> // Necesaria para la funci�n de numeros aleatorios.
#include <time.h> // Necesaria en la funci�n de numeros aleatorios en "time(0)".
#define RENGLONES_MAX 10 //Se establece que "RENGLONES_MAX" tendr� un valor de 10.
#define COLUMNAS_MAX 10 //Se establece que "COLUMNAS_MAX" tendr� un valor de 10.
void menu () //Aqu� se imprime el men� de opciones.
{
    printf("\n MENU DE OPCIONES:\n 1. Llena matriz.\n 2. Imprime matriz.\n");
    printf(" 3. Cuenta positivos en la matriz.\n 4. Suma Diagonal.\n 5. Mayor.\n");
    printf(" 6. Salir.");
}
void llena_matriz (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Con esto llenaremos de datos la matriz
{
    int i=0, j=0; //Se inicializan los contadores a 0.
    srand(time(0)); // Se fija la semilla para la funci�n "rand".
    for (i=0; i<10; i++) //Se har� ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++) //Se har� ciclo for por 10 vueltas.
        {
            matriz [i][j] = (rand()%21)-10; //matriz en posici�n "i" con "j" ser� igual a un n�mero aleatorio.
        }
    }
}
void imprime_matriz (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Con esto se imprimen los valores de la matriz.
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    printf("\n");//Imprime un salto de l�nea.
    for (i=0; i<10; i++) //Se har� ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++){ //Se har� ciclo for por 10 vueltas.
            printf("%i\t", matriz[i][j]);//Imprime el valor de la matriz en la posici�n "i" con "j".
        }
        printf("\n");//Imprime un salto de l�nea.
    }
}
int cuenta_positivos (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Se contar� la cantidad de n�meros positivos.
{
    int suma=0, i=0, j=0; //Se inicializan las variables de tipo int a 0.
    for (i=0; i<10; i++) //Se har� ciclo for por 10 vueltas.
    {
        for (j=0; j<10; j++) //Se har� ciclo for por 10 vueltas.
        {
            if (matriz[i][j]>0) //Si el valor de la matriz en la posici�n "i" con "j" es mayor o igual a cero
                suma=suma+1; //"suma" valdr� su antiguo valor m�s uno.
        }
    }
    return suma; //Regresa el valor de n�meros positivos
}
int suma_diagonal (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Sumar� las cantidades de la diagonal de la matriz.
{
    int suma=0, i=0, j=0; //Se inicializan las variables de tipo int a 0.
    for (i=0; i<10;i++)//Se har� ciclo for por 10 vueltas.
    {
        j=i;
        suma=suma+matriz[i][j]; //"suma" sera igual a "suma" m�s el valor de la matriz en la posici�n "i" con "j+i".
    }
    return suma; //Se regresa el valor de "suma".
}
int mayor (int matriz[RENGLONES_MAX] [COLUMNAS_MAX]) //Determinar� el n�mero m�s grande de la matriz.
{
    int nummayor=matriz[0][0], i=0, j=0;//Se inicializan las variables de tipo int a 0.
    for (i=0; i<10; i++)//Se har� ciclo for por 10 vueltas.
    {
        for (j=0;j<10;j++)//Se har� ciclo for por 10 vueltas.
        {
            if (matriz[i][j]>=nummayor) //Si el valor de la matriz en la posici�n "i" con "j" es mayor a "nummayor" entonces
                nummayor=matriz[i][j];//"nummayor" ser� su antiguo valor m�s el valor de la matriz en la posici�n "i" con "j".
        }
    }
    printf("\n El mayor numero encontrado fue: %i \n", nummayor); //Imprime.
    return nummayor; //Se regres� el valor final de "nummayor".
}
int main ()
{
    int O=0, npositivos=0, suma=0, nummayor=0; //Se inicializan las variables de tipo int a 0.
    int matriz[RENGLONES_MAX] [COLUMNAS_MAX]; //Se declara la matriz
    do //Inicio cilo Do-While:
    {
        menu(); //Llama a procedimiento "menu" que mostrar� el men� de operaciones en la pantalla.
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
            npositivos=cuenta_positivos(matriz); //"npositivos" ser� igual a lo que regrese la funci�n "cuenta_positivos".
            printf("\n El numero de elementos positivos (mayor a cero) es de: %i \n", npositivos); //Imprime.
            break; //Fin, en caso de que "O" sea 3.
        case 4: //Si "O" es igual a 4, entonces:
            suma=suma_diagonal(matriz); //"suma" ser� igual a lo que regrese la funci�n "suma_diagonal".
            printf("\n La suma de la diagonal es de: %i \n", suma); //Imprime.
            break; //Fin, en caso de que "O" sea 4.
        case 5: //Si "O" es igual a 5, entonces:
            nummayor=mayor(matriz); //"nummayor" ser� igual a lo que regrese la funci�n "mayor".
            break; //Fin, en caso de que "O" sea 5.
        case 6: //Si "O" es igual a 6, entonces:
            printf("\n Saliendo... \n\n"); //Imprime.
            break; //Fin, en caso de que "O" sea 6.
        default: //Si el valor de "O" es distinto a los anteriores:
            printf("\n Error! \n\n"); //Imprime.
            break;
        }
    } while (O!=6); //El ciclo DoWhile se har� mientras que "O" sea distinto de 6 (salir).
    return 0;
}//Fin del programa.
