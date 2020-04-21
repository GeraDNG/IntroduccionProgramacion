#include <stdio.h>
#include "biblioteca.h"
int cuenta_consonantes (char nombre_archivo[21])
{
    FILE*archivo = fopen (nombre_archivo, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char cadena [255]; //Se declara una cadena de 255 caracteres.
    int i=0, suma=0; //Se declara "i" y "suma" como variables de tipo int y se igualan a 0.
    while (!feof(archivo))
    {
        fscanf(archivo, "%s", &cadena); //La cadena tendrá lo que haya escrito en el archivo.
        for (i=0;cadena[i]!='\0';i++) //Determina cuando existe una consonante y le suma un 1 al antiguo valor de "suma".
        {
            if (cadena[i]=='b'||cadena[i]=='c'||cadena[i]=='d'||cadena[i]=='f'||cadena[i]=='g'||
                cadena[i]=='h'||cadena[i]=='j'||cadena[i]=='k'||cadena[i]=='l'||cadena[i]=='m'||cadena[i]=='n'||
                cadena[i]=='p'||cadena[i]=='q'||cadena[i]=='r'||cadena[i]=='s'||cadena[i]=='t'||
                cadena[i]=='v'||cadena[i]=='w'||cadena[i]=='x'||cadena[i]=='y'||cadena[i]=='z'||
                cadena[i]=='B'||cadena[i]=='C'||cadena[i]=='D'||cadena[i]=='F'||cadena[i]=='G'||
                cadena[i]=='H'||cadena[i]=='J'||cadena[i]=='K'||cadena[i]=='L'||cadena[i]=='M'||cadena[i]=='N'||
                cadena[i]=='P'||cadena[i]=='Q'||cadena[i]=='R'||cadena[i]=='S'||cadena[i]=='T'||
                cadena[i]=='V'||cadena[i]=='W'||cadena[i]=='X'||cadena[i]=='Y'||cadena[i]=='Z')
            {
                suma=suma+1;
            }
        }
    }
    return suma; //Regresa el valor de "suma" al main.
}
void leer_con_formato ()
{
    FILE * archivo = fopen("califica.txt", "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char caracteres[255]; //Se declara una cadena de 255 caracteres.
    if (archivo!=NULL) //Si existe el archivo pedido, entonces:
    {
        do{ //Se hará el ciclo:*/
            fgets(caracteres, 255, archivo); //Recibe texto desde un archivo de texto externo.
            puts(caracteres); //Imprime el texto recibido anteriormente en la pantalla.
        }while (!feof(archivo)); //Se hará el ciclo mientras en "archivo" no sea "EOF".
    } else {printf("\n No encontre el archivo. \n\n");} //Si no existe el archivo pedido, imprime mensaje de error.
    fclose(archivo); //Se cierra el archivo.
}
void encuentra_en_archivo ()
{
    FILE*original;
    original = fopen("mensaje secreto.txt", "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char frase[50]; //Se declara una cadena de 21 caracteres.
    char frase_codificada[50]; //Se declara una cadena de 21 caracteres.
    int i=0, j=0;
    for(j=0;j<50;j++) //Inicializa a las dos cadenas, escribiendo 0 en cada espacio.
    {
        frase[j]=0;
        frase_codificada[j]=0;
    }
    while (!feof(original)) //Se hará el ciclo mientras que "frase" en la posición de "i" sea distinto a "EOF".
    {
        fgets(frase, 50, original); //Recibe (copia) texto desde un archivo de texto externo.
    }
    while(frase[i]!='\0') //Se hará el ciclo mientras que "frase" en la posición de "i" sea distinto a "\0".
    {
        frase_codificada[i]=(frase[i]-1); //"frase_codificada" en la posición "i" será el valor de "frase" más uno.
        if(frase_codificada[i]==64){ //Si "frase_codificada" en la posición "i" es igual a 64,
            frase_codificada[i]=90;} //"frase_codificada" en la posición "i" será igual a 65.
        /*else if (frase_codificada[i]==65){ //Si "frase_codificada" en la posición "i" es igual a 91,
            frase_codificada[i]=90;}        //"frase_codificada" en la posición "i" será igual a 90.*/
        /*else if (frase_codificada[i]==96){ //Si "frase_codificada" en la posición "i" es igual a 96,
            frase_codificada[i]=97;}        //"frase_codificada" en la posición "i" será igual a 97.*/
        else if (frase_codificada[i]==96){ //Si "frase_codificada" en la posición "i" es igual a 123,
            frase_codificada[i]=122;}        //"frase_codificada" en la posición "i" será igual a 97.
        else if (frase_codificada[i]==31){ //Si "frase_codificada" en la posición "i" es igual a 33,
            frase_codificada[i]=32;}        //"frase_codificada" en la posición "i" será igual a 32.
        i++; //"i" será igual al antiguo valor de "i" más uno.
    }
    printf("\n Su mensaje decodificado seria: \n\t"); //Imprime.
    puts(frase_codificada); //Imprime el mensaje codificado en la pantalla.
    fclose(original); //Se cierran ambos archivos.
}
int main ()
{
    char O; //Se declara la variable "O" de tipo caracter.
    char nombre_archivo[21]; //Se declara una cadena de 21 caracteres.
    int suma;
    FILE *pf;
    do //Inicia cilo Do-While que se hará siempre y cuando "O" sea distinto de "s" o "S".
    {
        menu(); //Muestra el menú de opciones disponibles.
        printf("\n Que opcion desea?\t"); //Pide la opción deseada.
        scanf("%s%*c", &O); //Guarda la opción deseada en "O".
        switch (O) //Inicia Switch con base en "O":
        {
        case 'a': case 'A': //En el caso de que "O" sea "a" o "A":
            printf("\n Dar el nombre con el que se llamara el archivo de texto (incluyendo .txt)\n\t"); //Pide el nombre del archivo a crear.
            scanf("%s%*c", &nombre_archivo); //Guarda el nombre del archivo en la cadena "nombre_archivo".
            escribir_en_archivo(nombre_archivo); //Llama al procedimiento "escribir_en_archivo" y hará todo lo programado en él.
            break;//Fin caso de que "O" sea "a" o "A".
        case 'b': case 'B': //En el caso de que "O" sea "b" o "B":
            escribir_con_formato();  //Llama al procedimiento "escribir_con_formato" y hará todo lo programado en él.
            break;//Fin caso de que "O" sea "b" o "B".
        case 'c': case 'C': //En el caso de que "O" sea "c" o "C":
            printf("\n Dar el nombre con el que se llamara el archivo de texto (incluyendo .txt)\n\t"); //Pide el nombre del archivo a crear.
            scanf("%s%*c", &nombre_archivo); //Guarda el nombre del archivo en la cadena "nombre_archivo".
            escribir_en_bitacora(nombre_archivo); //Llama al procedimiento "escribir_en_bitacora" y hará todo lo programado en él.
            break; //Fin caso de que "O" sea "c" o "C".
        case 'd': case 'D': //En el caso de que "O" sea "d" o "D":
            esconde_en_archivo(); //Llama al procedimiento "esconde_en_archivo" y hará todo lo programado en él.
            break; //Fin caso de que "O" sea "d" o "D".
        case 'e': case 'E': //En el caso de que "O" sea "e" o "E":
            printf("\n Dar el nombre del archivo de texto que desea abrir (incluyendo .txt)\n\t"); //Pide el nombre del archivo a crear.
            scanf("%s%*c", &nombre_archivo); //Guarda el nombre del archivo en la cadena "nombre_archivo".
            despliega_archivo(nombre_archivo); //Llama al procedimiento "despliega_archivo" y hará todo lo programado en él.
            break; //Fin caso de que "O" sea "e" o "E".
        case 'f': case 'F': //En el caso de que "O" sea "f" o "F":
            printf("\n Dar el nombre del archivo de texto que desea abrir (incluyendo .txt)\n\t"); //Pide el nombre del archivo a crear.
            scanf("%s%*c", &nombre_archivo); //Guarda el nombre del archivo en la cadena "nombre_archivo".
            suma=cuenta_consonantes(nombre_archivo); //Llama al procedimiento "cuenta_consonantes" y hará todo lo programado en él.
            printf("\n La cantidad de consonantes encontradas es de: %i.\n\n", suma); //Imprime.
            break; //Fin caso de que "O" sea "f" o "F".
        case 'g': case 'G': //En el caso de que "O" sea "g" o "G":
            leer_con_formato(); //Llama al procedimiento "leer_con_formato" y hará todo lo programado en él.
            break; //Fin caso de que "O" sea "g" o "G".
        case 'h': case 'H': //En el caso de que "O" sea "h" o "H":
            encuentra_en_archivo(); //Llama al procedimiento "encuentra_en_archivo" y hará todo lo programado en él.
            break; //Fin caso de que "O" sea "h" o "H".
        case 's': case 'S': //En el caso de que "O" sea "s" o "S":
            printf("\n Saliendo... \n\n"); //Imprime "saliendo".
            break; //Fin caso de que "O" sea "s" o "S".
        default: //Caso por default:
            printf("\n Error! \a\n\n"); //Imprime error.
            break; //Termina el caso default.
        } //Termina Switch con base en "O":
    } while (O!='s'&&O!='S'); //Termina el cilo Do-While que se hará siempre y cuando "O" sea distinto de "s" o "S".
    return 0; //Fin.
}
