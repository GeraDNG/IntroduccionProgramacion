//Inicio del programa.
#include <stdio.h> // Necesaria para el "scanf" y el "printf".
#include <stdlib.h> // Necesaria para la función de numeros aleatorios.
#include <time.h> // Necesaria en la función de numeros aleatorios en "time(0)".
void menu() //Aquí se imprime el menú de opciones.
{
    printf("\n\n Opciones disponibles:\n 1.- Sumar valor de la primer matriz en [i,j] con el de la segunda matriz.");
    printf("\n 2.- Restar valor de la segunda matriz en [i,j] con el de la primera matriz.");
    printf("\n 3.- Sumatoria total de la segunda matriz mas el valor total de la primera.");
    printf("\n 4.- Sumatoria total de la segunda matriz menos el valor total de la primera.");
    printf("\n 5.- Obtener el numero mayor de cada matriz. \n 6.- Salir.");

}
void inicio_matriz(int matriz[5][5]) //Con esto llenaremos de datos la matriz
{
    printf("\n \tEjemplo de la matriz:\n"); //Imprime.
    int i=0, j=0, k=1; //Se inicializan los contadores a 0 y "k" a 1.
    for (i=0;i<5;i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0;j<5;j++)//Se hará ciclo for por 5 vueltas.
        {
            matriz[i][j]=0;//"matriz" en posicion "i" con "j" sera igual a 0.
            printf("%i\t", matriz[i][j]); //Imprime como ejemplo.
        }
        printf("\n"); //Imprime.
    }
}
void inicio_matriz2(int matriz2[5][5]) //Con esto llenaremos de datos la matriz2
{
    int i=0, j=0, k=1;//Se inicializan los contadores a 0 y "k" a 1.
    for (i=0;i<5;i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0;j<5;j++)//Se hará ciclo for por 5 vueltas.
            matriz2[i][j]=0;//"matriz2" en posicion "i" con "j" sera igual a 0,
    }
}
void generar_alt (int matriz[5][5], int n) //Con esto llenaremos de datos aleatorios la matriz
{
    int i=0, j=0; //Se inicializan los contadores a 0.
    srand(time(0)); // Se fija la semilla para la función "rand".
    for (i=0; i<5; i++) //Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++) //Se hará ciclo for por 5 vueltas.
        {
            matriz[i][j]=rand()%n; //matriz en posición "i" con "j" será igual a un número aleatorio entre 0 y "n".
            printf("%i\t", matriz[i][j]); //Imprime.
        }
        printf("\n");//Imprime.
    }
}
void generar_alt2 (int matriz2[5][5], int n) //Con esto llenaremos de datos aleatorios la matriz2
{
    int i=0, j=0; //Se inicializan los contadores a 0.
    srand(time(0)); // Se fija la semilla para la función "rand".
    for (i=0; i<5; i++) //Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++) //Se hará ciclo for por 5 vueltas.
        {
            matriz2[i][j]=(rand()%n)+(rand()%n); //matriz2 en posición "i" con "j" será igual a un número aleatorio.
            printf("%i\t", matriz2[i][j]); //Imprime.
        }
        printf("\n");//Imprime.
    }
}
void dar_valor(int matriz[5][5]) //Con este procedimiento de le asignara un valor a cada espacio de la matriz.
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            printf("\n Dar el valor para la posicion [%i][%i]:  ", i, j); //Imprime.
            scanf("%i*%i", &matriz[i][j]);//Recibe valor y lo guarda en "matriz" en posicion "i" con "j".
        }
    }
}
void dar_valor2(int matriz2[5][5]) //Con este procedimiento de le asignara un valor a cada espacio de la matriz.
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            printf("\n Dar el valor para la posicion [%i][%i]:  ", i, j);//Imprime.
            scanf("%i*%i", &matriz2[i][j]);//Recibe valor y lo guarda en "matriz2" en posicion "i" con "j"
        }
    }
}
void imprimir (int matriz[5][5]) //Se imprimirán los valores de "matriz".
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            printf("%i\t", matriz[i][j]);//Imprime.
        }
        printf("\n");//Imprime.
    }

}
void imprimir2 (int matriz2[5][5])//Se imprimirán los valores de "matriz2".
{
    int i=0, j=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            printf("%i\t", matriz2[i][j]);//Imprime.
        }
        printf("\n");//Imprime.
    }

}
void sumar (int matriz[5][5], int matriz2[5][5]) //Se sumara "matriz" en "i" con "j" más "matriz2" en "i" con "j".
{
    int i=0, j=0, suma=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            suma=suma+(matriz[i][j]+matriz2[i][j]); //"suma" sera igual a su antiguo valor mas el valor actual de las matrices.
            printf("%i\t", suma); //Imprime valor de "suma".
            suma=0; //"suma" se reinicia.
        }
        printf("\n");//Imprime.
    }
}
void restar (int matriz[5][5], int matriz2[5][5]) //Se restara "matriz2" en "i" con "j" menos "matriz" en "i" con "j".
{
    int i=0, j=0, suma=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
        {
            suma=suma+(matriz2[i][j]-matriz[i][j]);//"suma" sera su antiguo valor mas el valor de la diferencia de las matrices.
            printf("%i\t", suma);//Imprime valor de "suma".
            suma=0;//"suma" se reinicia.
        }
        printf("\n");//Imprime.
    }
}
void sumatotal (int matriz[5][5], int matriz2[5][5]) //Sumara los totales de ambas matrices.
{
    int i=0, j=0, suma=0, suma1=0, suma2=0;//Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
            suma1=suma1+matriz[i][j];//"suma1" será su antiguo valor más el valor actual de la matriz.
    }
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
            suma2=suma2+matriz2[i][j];//"suma2" será su antiguo valor más el valor actual de la matriz2.
    }
    suma=suma1+suma2; //"suma" es igual a "suma1" más "suma2".
    printf("\n La sumatoria de la primer matriz mas la suma de la segunda es de: %i", suma); //Imprime.
}
void restatotal (int matriz[5][5], int matriz2[5][5]) //Restará el total de la primera matriz del total de la matriz2.
{
    int i=0, j=0, suma=0, suma1=0, suma2=0; //Se inicializan los contadores a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
            suma1=suma1+matriz[i][j];//"suma1" será su antiguo valor más el valor actual de la matriz.
    }
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0; j<5; j++)//Se hará ciclo for por 5 vueltas.
            suma2=suma2+matriz2[i][j];//"suma2" será su antiguo valor más el valor actual de la matriz2.
    }
    suma=suma2-suma1;//"suma" es igual a "suma2" menos "suma1".
    printf("\n La sumatoria de la segunda matriz menos la suma de la primera es de: %i", suma); //Imprime.
}
void mayor1 (int matriz[5][5]) //Determinará el número más grande de la matriz.
{
    int nummayor=matriz[0][0], i=0, j=0;//Se inicializan las variables de tipo int a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0;j<5;j++)//Se hará ciclo for por 5 vueltas.
        {
            if (matriz[i][j]>=nummayor) //Si el valor de la matriz en la posición "i" con "j" es mayor a "nummayor" entonces
                nummayor=matriz[i][j];//"nummayor" será su antiguo valor más el valor de la matriz en la posición "i" con "j".
        }
    }
    printf("\n El mayor numero encontrado en la primer matriz fue: %i \n", nummayor); //Imprime.
}

void mayor2 (int matriz2[5][5]) //Determinará el número más grande de la matriz2.
{
    int nummayor=matriz2[0][0], i=0, j=0;//Se inicializan las variables de tipo int a 0.
    for (i=0; i<5; i++)//Se hará ciclo for por 5 vueltas.
    {
        for (j=0;j<5;j++)//Se hará ciclo for por 5 vueltas.
        {
            if (matriz2[i][j]>=nummayor) //Si el valor de la matriz2 en la posición "i" con "j" es mayor a "nummayor" entonces
                nummayor=matriz2[i][j];//"nummayor" será su antiguo valor más el valor de la matriz2 en la posición "i" con "j".
        }
    }
    printf("\n El mayor numero encontrado en la segunda matriz fue: %i \n", nummayor); //Imprime.
}
int main () //Inicia función main, funcion principal.
{
    int O=0, O1=0, n=0; //Se inicializan las variables de tipo int a 0.
    int matriz[5][5]; //Declaracion de "matriz".
    int matriz2[5][5]; //Declaracion de "matriz2".
    inicio_matriz(matriz); //Llamada a procedimiento "inicio_matriz".
    inicio_matriz2(matriz2);//Llamada a procedimiento "inicio_matriz2".
    printf("\n Utilizacion de dos matrices de 5x5 para operaciones matematicas."); //Imprime
    printf("\n Puede:\n 1.- Generar numeros aleatorios para las matrices\n 2.- Dar valores para las matrices\n Que desea?\t");
    scanf("%i*%i", &O1); //Recibe valor y lo guarda en "O1".
    switch (O1) //Inicia Switch en base a "O1":
    {
    case 1: //Si "O1" es igual a 1:
        printf("\n Para la primer matriz se generaran numeros aleatorios entre el 0 y el:\t"); //Imprime.
        scanf("%i*%i", &n); //Recibe valor y lo guarda en "n".
        n=n+1; //"n" sera igual a su antiguo valor más 1.
        printf("\n Por lo tanto, la primer matriz (en el rango de numeros) queda como: \n\n"); //Imprime.
        generar_alt(matriz, n); //Llamada a procedimiento "generar_alt".
        printf("\n Y la segunda matriz (al azar) como: \n\n"); //Imprime.
        generar_alt2(matriz2, n); //Llamada a procedimiento "generar_alt2".
        break; //Finaliza si "O1" es 1.
    case 2: //Si "O1" es igual a 2:
        printf("\n Se pedira asignar el valor para cada lugar de las matrices.\n"); //Imprime.
        printf("\n Dar los valores de la primer matriz"); //Imprime.
        dar_valor(matriz); //Llama a procedimiento "dar_valor".
        printf("\n Dar los valores de la segunda matriz"); //Imprime.
        dar_valor2(matriz2); //Llama a procedimiento "dar_valor2".
        printf("\n Por lo tanto, la primer matriz queda: \n"); //Imprime.
        imprimir(matriz); //Llama a procedimiento "imprimir".
        printf("\n Y la segunda matriz queda: \n"); //Imprime.
        imprimir2(matriz2); //Llama a procedimiento "imprimir2".
        break;//Finaliza si "O1" es 2.
    default: //En caso de que no sea ninguna anterior:
        printf("\n\n Error! \n\n"); //Imprime.
        break; //Fin en caso de que no sea ninguna anterior.
    } //Fin del Switch con base en "O1".
    do{ //Inicia ciclo Do-While con base en "O":
        menu(); //Llama a procedimiento "menu".
        printf("\n Que opcion desea?\t"); //Imprime.
        scanf("%i*%i", &O); //Recibe y guarda valor en "O".
        switch (O) //Inicia Switch con base en "O":
        {
        case 1: //Si "O" es igual a 1:
            sumar(matriz, matriz2); //Llama a procedimiento "sumar".
            break; //Finaliza si "O" es 1.
        case 2: //Si "O" es igual a 2:
            restar(matriz, matriz2); //Llama a procedimiento "restar".
            break; //Finaliza si "O" es 2.
        case 3: //Si "O" es igual a 3:
            sumatotal(matriz, matriz2); //Llama a procedimiento "sumatotal".
            break; //Finaliza si "O" es 3.
        case 4: //Si "O" es igual a 4:
            restatotal(matriz, matriz2); //Llama a procedimiento "restatotal".
            break; //Finaliza si "O" es 4.
        case 5: //Si "O" es igual a 5:
            mayor1(matriz); //Llama a procedimiento "mayor1".
            mayor2(matriz2); //Llama a procedimiento "mayor2".
            break; //Finaliza si "O" es 5.
        case 6: //Si "O" es igual a 6:
            printf("\n\n Saliendo... \n\n"); //Imprime.
            break; //Finaliza si "O" es 6.
        default: //En caso de que no sea ninguna anterior:
            printf("\n\n Error! \n\n\n"); //Imprime.
            break; //Fin en caso de que no sea ninguna anterior.
        } //Fin del Switch con base en "O".
    } while(O!=6); //Fin del ciclo Do-While que se hara mientras que "O" sea distinto de 6.
    return 0;
} //Finaliza función main, funcion principal.
//Fin del programa.
