#include <stdio.h> //Se incluye biblioteca necesaria para el uso de "printf" y "scanf".
#include <string.h> //Biblioteca
int cromosomas_x (char cad[9]) //Inicia función
{
    int cuentax=0, i=0; //Declaracion de variables igualadas a cero.
    //printf("\n Escribir la cadena de cromosomas (y presionar ctrl+z + enter al finalizar): ");
    for (i=0; i<9; i++)
        if (cad[i]=='x'||cad[i]=='X') ++cuentax; //Si cad en el valor de "i" es igual a "x" o "X" entonces "cuentax" suma 1.
    printf("\n Hay %d letras x.", cuentax); //Imprime
    return cuentax; //Regresa el valor
} //Termina funcion
int cromosomas_y (char cad[9]) //Inicia función
{
    int cuentay=0, i=0; //Declaracion de variables igualadas a cero.
    for (i=0; i<9; i++)
        if (cad[i]=='y'||cad[i]=='Y') ++cuentay; //Si cad en el valor de "i" es igual a "y" o "Y" entonces "cuentay" suma 1.
    printf("\n Hay %d letras y.", cuentay);
    return cuentay;//Regresa el valor
} //Termina funcion
void determina_sexo (char cad[9]) //Inicia proceso
{
    int cuentax=0, cuentay=0; //Declaracion de variables igualadas a cero.
    cuentax=cromosomas_x(cad); //"cuentax" sera igual al valor regresado de la función "cromosomas_x"
    cuentay=cromosomas_y(cad); //"cuentay" sera igual al valor regresado de la función "cromosomas_y"
    if (cuentax > cuentay) //Si "cuentax" es mayor que "cuentay":
        printf("\n El sexo, por lo tanto, es femenino.\n\n"); //Imprime.
    else if (cuentax < cuentay) //Si "cuentax" es menor que "cuentay":
    printf("\n El sexo, por lo tanto, es masculino.\n\n");//Imprime.
    else if (cuentax == cuentay) //Si "cuentax" es igual que "cuentay":
    printf("\n Sexo indefinido. \n\n"); //Imprime.
    else //Otro:
    printf("\n Error.\n\n"); //Imprime.
} //Termina proceso
void imprime_limpio (char cad2[21]) //Inicia proceso
{
    int i=0; //Declaracion de "i" de tipo int igualada a cero.
    for (i=0; i<21; i++)
    {
        if (cad2[i]=='x'||cad2[i]=='X'||cad2[i]=='y'||cad2[i]=='Y') //Si "cad2" en la posicion "i" es "x" o "X" o "y" o "Y":
            printf("%c", cad2[i]); //Imprimir "cad2" en la posicion "i".
    }
} //Termina proceso
int main() //Inicia función main.
{
    int O=0;
    char cad[9];
    char cad2[21];
    do{ //Hacer lo siguiente.
    printf("\n Opciones disponibles:"); //Imprime
    printf("\n\t 1.- Determinar el sexo. \n\t 2.- Imprimir cadena de cromosomas sin espacios. \n\t 3.- Salir."); //Imprime
    printf("\n Dar el numero de la opcion deseada: \t"); //Imprime
    scanf("%i%*c", &O); //Recibe valor y lo guarda en "O".
    switch (O){ //Inicia Switch:
    case 1: //En caso de que "O" valga 1:
        printf("\n Introducir la cadena de ocho cromosomas sin espacios: \t"); //Imprime
        gets(cad); //Recibe valores y los guarda en "cad", con maximo de 8
        determina_sexo(cad); //Llama a proceso "determina_sexo"
        break;//Termina.
    case 2: //En caso de que "O" valga 2:
        printf("\n Introducir la cadena de ocho cromosomas, puede incluir espacios en blanco pero sin superar los 20 digitos:\t");
        gets(cad2); //Recibe valores y los guarda en "cad2", con maximo de 20
        imprime_limpio(cad2); //Llama a proceso "imprime_limpio"
        break;//Termina.
    case 3: //En caso de que "O" valga 3:
        printf("\n Saliendo... \n\n"); //Imprime
        break; //Termina.
    default: //Default:
        printf("\n Numero invalido... \n\n"); //Imprime
        break;//Termina.
    } //Termina Switch.
    } while (O!=3); //Hacer lo anterior mientras que "O" sea diferente a 3.
    return 0;
} //Termina función main.
