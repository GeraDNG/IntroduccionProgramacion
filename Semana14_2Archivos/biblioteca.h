#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
// Se definen las bibliotecas:
#include <stdio.h> // Ésta es para el uso de "printf" y "scanf".
#include <stdlib.h>
#include <time.h> // Ésta es para poder tener el tiempo.
#include <string.h> // Ésta es para el uso de "strcmp".
// Inician las funciones:
void menu () // El procedimiento "menu" imprime el menu de opciones disponibles en la consola.
{
    printf("\n Menu de opciones:\n A. Escribir en archivo.\n B. Guarda datos de alumnos.\n C. Erscribir en bitacora."); //Imprime.
    printf("\n D. Esconde en Archivo.\n E. Imprime archivo.\n F. Cuenta Consonantes.\n G. Muestra datos de alumnos.");
    printf("\n H. Encuentra en Archivo.\n S. Salir.");
}
void escribir_en_archivo (char nombre_archivo[21]) // Se recibe lo que será el nombre del archivo a crear.
{
    int i=0; //Se declara la variable "i" de tipo int y se iguala a 0.
    char oraciones [51]; //Se declara una cadena de 51 caracteres.
    FILE * archivo;
    archivo = fopen(nombre_archivo, "w"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    printf("Dar 5 oraciones o frases (menores a 50 caracteres cada una):\n");
    for (i=0;i<5;i++) //Proceso que se repite 5 veces:
    {
        gets(oraciones); //Recibe una oración por parte del usuario mediante la consola.
        fputs(oraciones, archivo); //Escribe la oración en el archivo creado.
        fputs("\n", archivo); //Escribe un salto de linea en el archivo creado.
    }
    fclose(archivo); //Se cierra el archivo creado.
}
void escribir_con_formato()
{
    int i=0, n=0; //Se declara las variables "i" y "j" de tipo int y se igualan a 0.
    char oraciones [15]; //Se declara una cadena de 15 caracteres.
    FILE * archivo;
    archivo = fopen("califica.txt", "wt"); //Se abre e inicia el archivo a manera de escritura con el nombre "califica.txt".
    printf("\n Dar la cantidad de alumnos del curso: \t"); //Pide la cantidad de alumnos.
    scanf("%i%*c", &n); //Guarda la cantidad de alumnos en la variable "n".
    printf("\n");
    for (i=0;i<n;i++) //Ciclo que se repetirá tantas veces como el numero de alumnos:
    {
        printf("\n Dar el nombre: \t"); //Pide nombre.
        gets(oraciones);                //Recibe el nombre por parte del usuario mediante la consola.
        fputs(oraciones, archivo);      //Escribe el nombre en el archivo creado.
        fputs(", ", archivo);           //Escribe una coma en el archivo creado.
        printf("\n Dar la carrera: \t");//Pide carrera.
        gets(oraciones);                //Recibe la carrera por parte del usuario mediante la consola.
        fputs(oraciones, archivo);      //Escribe la carrera en el archivo creado.
        fputs(", ", archivo);           //Escribe una coma en el archivo creado.
        printf("\n Dar la calificacion: \t"); //Pide calificación.
        gets(oraciones);                      //Recibe la calificación por parte del usuario mediante la consola.
        fputs(oraciones, archivo);            //Escribe la calificación en el archivo creado.
        fputs(".\n", archivo);                //Escribe un punto en el archivo creado.
    } //Acaba el ciclo.
    fclose(archivo); //Se cierra el archivo.
}
void escribir_en_bitacora (char nombre_archivo[21])
{
    char oraciones [201]; //Se declara una cadena de 201 caracteres.
    char key[2] = "*"; //Se declara una cadena de 2 caracteres que contendrá "*".
    FILE * archivo;
    archivo = fopen(nombre_archivo, "a"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    printf("\n Podra escribir oraciones para guardar en su bitacora \n Las oraciones deben ser menores a 200 caracteres cada una.");
    printf("\n Para indicar que finalizo escriba * como nueva oracion.\n A continuacion escriba las oraciones:\n\n");
    do //Inicia cilo Do-While, se hará mientras la oración dada no sea "*".
    {
        time_t t=time(NULL);
        struct tm tm= *localtime(&t);
        gets(oraciones); //Recibe la oración por parte del usuario mediante la consola.
        if (strcmp (key,oraciones)!=0)
        {
            fprintf(archivo,"\nFecha: %d/%d/%d\tHora: %d:%d:%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
            fputs(oraciones, archivo); //Escribe la oración en el archivo creado.
            fputs("\n______________________________________\n", archivo); //Escribe guiones en el archivo creado.
        }
    }while (strcmp (key,oraciones) != 0); //Termina cilo Do-While
    fclose(archivo); //Se cierra el archivo.
}
void esconde_en_archivo (void)
{
    int i=0, j=0; //Se declara las variables "i" y "j" de tipo int y se igualan a 0.
    FILE*archivo = fopen("mensaje secreto.txt", "wt"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    char frase[21]; //Se declara una cadena de 21 caracteres.
    char frase_codificada[21]; //Se declara una cadena de 21 caracteres.
    for(j=0;j<21;j++) //Inicializa a las dos cadenas, escribiendo 0 en cada espacio.
    {
        frase[j]=0;
        frase_codificada[j]=0;
    }
    printf("\n Da 1 frase menor a 20 caracteres, se encriptara:\t"); //Pide la frase.
    gets(frase); //Recibe la frase por parte del usuario mediante la consola.
    while(frase[i]!='\0') //Se hará el ciclo mientras que "frase" en la posición de "i" sea distinto a "\0".
    {
        frase_codificada[i]=(frase[i]+1); //"frase_codificada" en la posición "i" será el valor de "frase" más uno.
        if(frase_codificada[i]==91){ //Si "frase_codificada" en la posición "i" es igual a 91,
            frase_codificada[i]=65;} //"frase_codificada" en la posición "i" será igual a 65.
        else if (frase_codificada[i]==123){ //Si "frase_codificada" en la posición "i" es igual a 123,
            frase_codificada[i]=97;}        //"frase_codificada" en la posición "i" será igual a 97.
        else if (frase_codificada[i]==33){ //Si "frase_codificada" en la posición "i" es igual a 33,
            frase_codificada[i]=32;}        //"frase_codificada" en la posición "i" será igual a 32.
        i++; //"i" será igual al antiguo valor de "i" más uno.
    }
    printf("\n Su mensaje codificado seria: \n\t"); //Imprime.
    puts(frase_codificada); //Imprime el mensaje codificado en la pantalla.
    fputs(frase_codificada, archivo); //Pone el mensaje codificado en el archivo creado.
}
void despliega_archivo (char nombre_archivo[21])
{
    printf("\n");
    FILE * archivo;
    archivo = fopen(nombre_archivo, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
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
#endif // BIBLIOTECA_H_INCLUDED
