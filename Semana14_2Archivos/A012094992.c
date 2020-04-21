#include <stdio.h> //Biblioteca para "printf" y "scanf".
void menu (void)
{
    printf("\n Estas son las opciones de lo que puede hacer el programa.\n 1.- Copiar un archivo.");
    printf("\n 2.- Codificar un texto y guardarlo en un archivo.\n 3.- Decodificar un archivo de texto en uno nuevo.");
    printf("\n 4.- Contar el numero de vocales en un archivo.\n 5.- Contar el numero de mayusculas de un archivo.");
    printf("\n 6.- Contar el numero de minusculas de un archivo.\n 7.- Salir.");
    printf("\n Nota: Para el paso 3, debe ser un archivo creado con anticipacion.\n En caso de ir al paso 2 y despues al 3 no funcionara.\n");
}
void escribir_en_archivo (char nombre_archivo[21], char nombre_original[21]) //Recibe dos cadenas (nombres de archivos de texto).
{
    FILE * archivo;
    archivo = fopen(nombre_archivo, "w"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    FILE*original;
    original = fopen(nombre_original, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char arg [100]; //Se declara una cadena de 100 caracteres.
    while (!feof(original)) //Se hará el ciclo mientras que "frase" en la posición de "i" sea distinto a "EOF".
    {
        fgets(arg, 100, original); //Recibe (copia) texto desde un archivo de texto externo.
        fprintf(archivo, "%s%*c", arg); //Imprime el texto copiado previamente en el segundo archivo creado.
    }
    fclose(original); //Se cierran ambos archivos.
    fclose(archivo);
    printf("\n Terminado. \n\n"); //Imprime
}
void codifica_archivo (char nombre[21])
{
    int i=0, j=0; //Se declara las variables "i" y "j" de tipo int y se igualan a 0.
    FILE*archivo = fopen(nombre, "wt"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
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
    printf("\n Ya quedo guardado en el archivo de texto.\n");
}
void decodifica_archivo (char nombre[21], char decodificado [21])
{
    FILE * archivo;
    archivo = fopen(decodificado, "w"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    FILE*original;
    original = fopen(nombre, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char frase[100]; //Se declara una cadena de 100 caracteres.
    char frase_codificada[100]; //Se declara una cadena de 100 caracteres.
    int i=0, j=0;
    for(j=0;j<100;j++) //Inicializa a las dos cadenas, escribiendo 0 en cada espacio.
    {
        frase[j]=0;
        frase_codificada[j]=0;
    }
    while (!feof(original)) //Se hará el ciclo mientras que "frase" en la posición de "i" sea distinto a "EOF".
    {
        fgets(frase, 100, original); //Recibe (copia) texto desde un archivo de texto externo.
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
    fputs(frase_codificada, archivo); //Pone el mensaje codificado en el archivo creado.
    printf("\n Ya quedo guardado en el nuevo archivo de texto.\n");
    fclose(original); //Se cierran ambos archivos.
    fclose(archivo);
}
void cuenta_vocales(char nombre_c[21])
{
    FILE*archivo = fopen(nombre_c, "r"); //Se abre e inicia el archivo a manera de escritura con el nombre recibido.
    char cadena [255]; //Se declara una cadena de 255 caracteres.
    int i=0, suma=0; //Se declara a "i" y a "suma" como variables de tipo int con valores de cero.
    while (!feof(archivo))
    {
        fscanf(archivo, "%s", &cadena); //Aquí la cadena recibe todo lo escrito en el archivo.
        for (i=0;cadena[i]!='\0';i++) //El ciclo sumará un 1 a "suma" cada que detecte una vocal.
        {
            if (cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'||
                cadena[i]=='A'||cadena[i]=='E'||cadena[i]=='I'||cadena[i]=='O'||cadena[i]=='U')
                    suma=suma+1;
        }
    }
    printf("\n El numero de vocales es de: %i.\n\n", suma); //imprime.
}
void cuenta_mayuscula(char nombre_c[21])
{
    FILE*archivo = fopen (nombre_c, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char cadena [255]; //Se declara una cadena de 255 caracteres.
    int i=0, suma=0; //Se declara "i" y "suma" como variables de tipo int y se igualan a 0.
    while (!feof(archivo))
    {
        fscanf(archivo, "%s", &cadena); //La cadena tendrá lo que haya escrito en el archivo.
        for (i=0;cadena[i]!='\0';i++) //Determina cuando existe una consonante y le suma un 1 al antiguo valor de "suma".
        {
            if (cadena[i]=='A'||cadena[i]=='B'||cadena[i]=='C'||cadena[i]=='D'||cadena[i]=='E'||cadena[i]=='F'||cadena[i]=='G'||
                cadena[i]=='H'||cadena[i]=='I'||cadena[i]=='J'||cadena[i]=='K'||cadena[i]=='L'||cadena[i]=='M'||cadena[i]=='N'||
                cadena[i]=='O'||cadena[i]=='P'||cadena[i]=='Q'||cadena[i]=='R'||cadena[i]=='S'||cadena[i]=='T'||cadena[i]=='U'||
                cadena[i]=='V'||cadena[i]=='W'||cadena[i]=='X'||cadena[i]=='Y'||cadena[i]=='Z')
            {
                suma=suma+1;
            }
        }
    }
    printf("\n El numero de mayusculas es de: %i.\n\n", suma); //imprime.
}
void cuenta_minusculas(char nombre_c[21])
{
    FILE*archivo = fopen (nombre_c, "r"); //Se abre e inicia el archivo a manera de lectura con el nombre recibido.
    char cadena [255]; //Se declara una cadena de 255 caracteres.
    int i=0, suma=0; //Se declara "i" y "suma" como variables de tipo int y se igualan a 0.
    while (!feof(archivo))
    {
        fscanf(archivo, "%s", &cadena); //La cadena tendrá lo que haya escrito en el archivo.
        for (i=0;cadena[i]!='\0';i++) //Determina cuando existe una consonante y le suma un 1 al antiguo valor de "suma".
        {
            if (cadena[i]=='a'||cadena[i]=='b'||cadena[i]=='c'||cadena[i]=='d'||cadena[i]=='e'||cadena[i]=='f'||cadena[i]=='g'||
                cadena[i]=='h'||cadena[i]=='i'||cadena[i]=='j'||cadena[i]=='k'||cadena[i]=='l'||cadena[i]=='m'||cadena[i]=='n'||
                cadena[i]=='o'||cadena[i]=='p'||cadena[i]=='q'||cadena[i]=='r'||cadena[i]=='s'||cadena[i]=='t'||cadena[i]=='u'||
                cadena[i]=='v'||cadena[i]=='w'||cadena[i]=='x'||cadena[i]=='y'||cadena[i]=='z')
            {
                suma=suma+1;
            }
        }
    }
    printf("\n El numero de minusculas es de: %i.\n\n", suma); //imprime.
}
int main ()
{
    char nombre_archivo[21]; //Se declara una cadena de 21 caracteres.
    char nombre_original[21]; //Se declara una cadena de 21 caracteres.
    char nombre_c[21]; //Se declara una cadena de 21 caracteres.
    int O=0; //Se declara la variable "O" de tipo int y se iguala a 0.
    char nombre [20]; //Se declara una cadena de 20 caracteres.
    char decodificado [21]; //Se declara una cadena de 21 caracteres.
    do{
    menu(); //Llama al procedimiento "menu".
    printf("\n Que opcion desea?\t"); //Pide la opción deseada.
    scanf("%i%*c", &O); //Guarda el numero de la opción recibida.
    switch(O){ //Inicia Switch con base en "O":
    case 1: //En caso de que "O" sea 1:
        printf("\n Se copiara un archivo de texto existente a uno nuevo."); //Dice lo que hará el programa.
        printf("\n Dar el nombre del archivo de texto original (incluye .txt)\n\t"); //Pide el nombre del archivo de texto original.
        scanf("%s", &nombre_original); //El nombre del texto original se guarda en la cadena "nombre_original".
        printf("\n Dar el nombre del nuevo archivo (incluye .txt)\n\t"); //Pide el nombre del archivo de texto a crear.
        scanf("%s", &nombre_archivo); //El nombre del texto a crear se guarda en la cadena "nombre_archivo".
        escribir_en_archivo(nombre_archivo, nombre_original); //Se llama a la función "escribir_en_archivo" y se mandan los nombres de los archivos.
        break; //Termina Switch en caso de que "O" sea 1.
    case 2: //En caso de que "O" sea 1:
        printf("\n Como quieres que se llame el archivo de texto que se creara? (incluye .txt)\n\t"); //Pide un nombre.
        scanf("%s%*c", &nombre); //Guarda el nombre del archivo en la cadena "nombre".
        codifica_archivo(nombre); //Llama a la función "codifica_archivo" y manda el nombre.
        break; //Termina Switch en caso de que "O" sea 2.
    case 3: //En caso de que "O" sea 1:
        printf("\n Como se llama el archivo de texto que se decodificara? (incluye .txt)\n\t"); //Pide un nombre.
        scanf("%s%*c", &nombre); //Guarda el nombre del archivo en la cadena "nombre".
        printf("\n Como quieres que se llame el archivo de texto que se creara? (incluye .txt)\n\t"); //Pide un nombre.
        scanf("%s%*c", &decodificado); //Guarda el nombre del archivo en la cadena "nombre".
        decodifica_archivo(nombre, decodificado); //Llama a la función "decodifica_archivo" y manda el nombre.
        break; //Termina Switch en caso de que "O" sea 3.
    case 4:
        printf("\n Dar el nombre del archivo de texto (incluye .txt)\n\t"); //Pide el nombre del archivo de texto original.
        scanf("%s", &nombre_c); //El nombre del texto original se guarda en la cadena "nombre_original".
        cuenta_vocales(nombre_c); //Llama a la función "cuenta_vocales" y manda el nombre.
        break;
    case 5:
        printf("\n Dar el nombre del archivo de texto (incluye .txt)\n\t"); //Pide el nombre del archivo de texto original.
        scanf("%s", &nombre_c); //El nombre del texto original se guarda en la cadena "nombre_original".
        cuenta_mayuscula(nombre_c); //Llama a la función "cuenta_mayuscula" y manda el nombre.
        break;
    case 6:
        printf("\n Dar el nombre del archivo de texto (incluye .txt)\n\t"); //Pide el nombre del archivo de texto original.
        scanf("%s", &nombre_c); //El nombre del texto original se guarda en la cadena "nombre_original".
        cuenta_minusculas(nombre_c); //Llama a la función "cuenta_minusculas" y manda el nombre.
    case 7:
        printf("\n Saliendo... \n\n"); //Imprime
        break;
    default: //El caso por default:
        printf("\n Error! \n\n"); //Imprime.
    } //Termina Switch con base en "O".
    } while (O!=7);
    return 0; //Fin.
}
