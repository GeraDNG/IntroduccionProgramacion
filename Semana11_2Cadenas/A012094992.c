#include <stdio.h>
#include <string.h>
/*
El objetivo es que al tener una letra "normal" se le sumen 3 casillas más del alfabeto para obtener la letra "cifrada".
Por ejemplo, "A" es "D" y así sucesivamente.
La tarea del programa es codificar y decodificar mensajes.
Este metodo de encriptacion por sustitución se conoce como "El cifrado César".
*/
void codificar(char mensaje[26]){
    int i=0;
    while(mensaje[i]!='\0'&&mensaje[i]!=' '){
        if (mensaje[i]=='A')
            mensaje[i]='D';
        else if (mensaje[i]=='B')
            mensaje[i]='E';
        else if (mensaje[i]=='C')
            mensaje[i]='F';
        else if (mensaje[i]=='D')
            mensaje[i]='G';
        else if (mensaje[i]=='E')
            mensaje[i]='H';
        else if (mensaje[i]=='F')
            mensaje[i]='I';
        else if (mensaje[i]=='G')
            mensaje[i]='J';
        else if (mensaje[i]=='H')
            mensaje[i]='K';
        else if (mensaje[i]=='I')
            mensaje[i]='L';
        else if (mensaje[i]=='J')
            mensaje[i]='M';
        else if (mensaje[i]=='K')
            mensaje[i]='N';
        else if (mensaje[i]=='L')
            mensaje[i]='O';
        else if (mensaje[i]=='M')
            mensaje[i]='P';
        else if (mensaje[i]=='N')
            mensaje[i]='Q';
        else if (mensaje[i]=='O')
            mensaje[i]='R';
        else if (mensaje[i]=='P')
            mensaje[i]='S';
        else if (mensaje[i]=='Q')
            mensaje[i]='T';
        else if (mensaje[i]=='R')
            mensaje[i]='U';
        else if (mensaje[i]=='S')
            mensaje[i]='V';
        else if (mensaje[i]=='T')
            mensaje[i]='W';
        else if (mensaje[i]=='U')
            mensaje[i]='X';
        else if (mensaje[i]=='V')
            mensaje[i]='Y';
        else if (mensaje[i]=='W')
            mensaje[i]='Z';
        else if (mensaje[i]=='X')
            mensaje[i]='A';
        else if (mensaje[i]=='Y')
            mensaje[i]='B';
        else if (mensaje[i]=='Z')
            mensaje[i]='C';
        i++;
    }
    printf("\n Su mensaje codificado seria: \n\t");
    puts(mensaje);
}
void decodificar(char mensaje[26]){
    int i=0;
    while(mensaje[i]!='\0'&&mensaje[i]!=' '){
        if (mensaje[i]=='D')
            mensaje[i]='A';
        else if (mensaje[i]=='E')
            mensaje[i]='B';
        else if (mensaje[i]=='F')
            mensaje[i]='C';
        else if (mensaje[i]=='G')
            mensaje[i]='D';
        else if (mensaje[i]=='H')
            mensaje[i]='E';
        else if (mensaje[i]=='I')
            mensaje[i]='F';
        else if (mensaje[i]=='J')
            mensaje[i]='G';
        else if (mensaje[i]=='K')
            mensaje[i]='H';
        else if (mensaje[i]=='L')
            mensaje[i]='I';
        else if (mensaje[i]=='M')
            mensaje[i]='J';
        else if (mensaje[i]=='N')
            mensaje[i]='K';
        else if (mensaje[i]=='O')
            mensaje[i]='L';
        else if (mensaje[i]=='P')
            mensaje[i]='M';
        else if (mensaje[i]=='Q')
            mensaje[i]='N';
        else if (mensaje[i]=='R')
            mensaje[i]='O';
        else if (mensaje[i]=='S')
            mensaje[i]='P';
        else if (mensaje[i]=='T')
            mensaje[i]='Q';
        else if (mensaje[i]=='U')
            mensaje[i]='R';
        else if (mensaje[i]=='V')
            mensaje[i]='S';
        else if (mensaje[i]=='W')
            mensaje[i]='T';
        else if (mensaje[i]=='X')
            mensaje[i]='U';
        else if (mensaje[i]=='Y')
            mensaje[i]='V';
        else if (mensaje[i]=='Z')
            mensaje[i]='W';
        else if (mensaje[i]=='A')
            mensaje[i]='X';
        else if (mensaje[i]=='B')
            mensaje[i]='Y';
        else if (mensaje[i]=='C')
            mensaje[i]='Z';
        i++;
    }
    printf("\n Su mensaje decodificado seria: \n\t");
    puts(mensaje);
}
int main ()
{
    int O=0;
    char mensaje[26];
    printf("\n Ejemplo de encriptacion:");
    printf("\n El texto normal seria: ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("\n El texto encriptado seria: DEFGHIJKLMNOPQRSTUVWXYZABC");
    printf("\n \n");
    do{
    printf("\n\n Para codificar 1, para decodificar 2 y para salir 3:\t");
    scanf("%i%*C", &O);
    switch(O)
    {
    case 1:
        printf("\n Por favor, teclee su mensaje a codificar \n (no mas de 25 digitos, sin espacios y en mayusculas): \n\t");
        gets(mensaje);
        codificar(mensaje);
        break;
    case 2:
        printf("\n Por favor, teclee su mensaje a decodificar \n (no mas de 25 digitos, sin espacios y en mayusculas): \n\t");
        gets(mensaje);
        decodificar(mensaje);
        break;
    case 3:
        printf("\n Saliendo... \n\n");
        break;
    }
    } while (O!=3);
    return 0;
}
