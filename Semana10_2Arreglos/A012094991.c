#include <stdio.h> //Se incluye libreria necesaria para el uso de "printf" y "scanf".
int i=0; //Se declara la variable "i" de tipo int y se iguala a 0.
void opciones () //Inicia procedimiento "opciones":
{
    //Se imprime el menu de opciones disponibles.
    printf("\n 1. Inicializa arreglo \n 2. Captura arreglo \n 3. Imprime arreglo \n 4. Elementos impares en el arreglo");
    printf("\n 5. Sustituye arreglo \n 6. Invierte arreglo \n 7. Salir \n Opcion deseada? \t");
} // Fin de "opciones".
void inicializa_arreglo (int arreglo[10]) //Inicia procedimiento "inicializa_arreglo":
{
    //El ciclo for igualara a 0 todos los espacios del arreglo.
    for (i=0; i<10; i++)
    {
        arreglo[i]=0;
    }
} //Fin de "inicializa_arreglo".
void captura_arreglo (int arreglo[10]) //Inicia procedimiento "captura_arreglo":
{
    // El for pedira un valor y lo asignara, proceso repetido para cada espacio del arreglo (9 veces).
    for (i=0; i<10; i++)
    {
        printf("\n Dar un valor para la posicion #%i del arreglo: ", i);
        scanf("%i", &arreglo[i]);
    }
} //Fin de "captura_arreglo".
void imprime_arreglo (int arreglo[10]) //Inicia procedimiento "imprime_arreglo":
{
    printf("\n");
    // El for imprime el valor de cada uno de los arreglos.
    for (i=0; i<10; i++)
    {
        printf("%i \n", arreglo[i]);
    }
} //Fin de "imprime_arreglo".
void impares (int arreglo[10]) //Inicia procedimiento "impares":
{
    int suma=0; // Se declara "suma" como variable de tipo int y se iguala a cero.
    for (i=0; i<10; i++)
    {
        if (arreglo[i]%2!=0) //Si el valor del arreglo es un numero impar entonces
            suma=suma+1; //Al antiguo valor de "suma" se le sumará un uno.
    }
    printf("\n La cantidad de numeros impares es de: %i \n\n", suma);//Se imprime la cantidad de numeros impares (valor de "suma")
} //Fin de "impares".
void sustituye (int arreglo[10], int x, int y) //Inicia procedimiento "sustituye":
{
    for (i=0; i<10; i++)
    {
        if (arreglo[i]==x) //Se determina si el valor del arreglo es igual al valor de "x" y en cuyo caso
            arreglo[i]=y; //Se le asigna el valor de "y" al arreglo.
    }
} //Fin de "sustituye".
void invertir (int arreglo[10]) //Inicia procedimiento "invertir":
{
    int a=9, x; // Se declaran como variables de tipo int a "a" y a "x". A "a" se le da un valor de 9.
    for (i=0; i<10; i++)
    {
        x=arreglo[a]; //"x" sera igual al valor del arreglo en la posicion de "a".
        printf("\n El arreglo # %i quedaria: %i", i, x); //Se imprime el valor de "a"-
        a=a-1; //Se le resta un uno al valor de "a".
    }
    printf("\n");
} //Fin de "invertir".
int main() //Funcion principal:
{
    int O; //Se declara "O" como variable de tipo int.
    int arreglo[10]; //Se declara un arreglo de 10 caracteres.
    do{ //Inicio ciclo Do-While:
    opciones();//Se llama al procedimiento "opciones".
    scanf("%i", &O); //Se escanea la seleccion del usuario y se guarda en la variable "O".
    if (O == 1) //Si O es igual a 1
        inicializa_arreglo(arreglo); //Se llama al procedimiento "inicializa_arreglo".
    else if (O==2) //Si O es igual a 2
        captura_arreglo(arreglo); //Se llama al procedimiento "captura_arreglo".
    else if (O==3) //Si O es igual a 3
        imprime_arreglo(arreglo); //Se llama al procedimiento "imprime_arreglo".
    else if (O==4) //Si O es igual a 4
        impares(arreglo); //Se llama al procedimiento "impares".
    else if (O==5) //Si O es igual a 5
    {
        int x, y; //Se declaran las variables "x" y "y" de tipo int.
        printf("\n Se sustituiran los valores de X encontrados por los valores de Y."); //imprime
        printf("\n Dar el valor para X: "); //Se pide el valor para "x":
        scanf("%i", &x); //Se guarda el valor de "x" en la variable "x".
        printf("\n Dar el valor para Y: "); //Se pide el valor para "y":
        scanf("%i", &y); //Se guarda el valor de "y" en la variable "y".
        sustituye(arreglo, x, y); //Se llama al procedimiento "sustituye".
    }
    else if (O==6) //Si O es igual a 6
        invertir(arreglo); //Se llama al procedimiento "invertir".
    else if (O==7) //Si O es igual a 7
        printf("\n Saliendo... \n\n"); //Imprime.
    else //Cualquier otro numero:
        printf("\n Numero incorrecto... \n\n"); //Imprime.
    } while (O!=7); //Do-While se repetirá siempre que "O" sea distinto de 7.
    return 0;
} //Fin.
