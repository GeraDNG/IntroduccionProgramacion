#include <stdio.h>
void escribir_en_archivo (char nombre_archivo[21], char nombre_original[21])
{
    FILE * archivo;
    archivo = fopen(nombre_archivo, "w");
    FILE*original;
    original = fopen(nombre_original, "r");
    char arg [51];
    while (!feof(original))
    {
        fgets(arg, 51, original);
        fprintf(archivo, "%s", arg);
    }
    fclose(original);
    fclose(archivo);
}
int main ()
{
    char nombre_archivo[21];
    char nombre_original[21];
    FILE *pf;
    printf("\n Dar el nombre con el que se llama el archivo de texto original (invlcuyendo .txt)\n\t");
    scanf("%s", &nombre_original);
    printf("\n Dar el nombre con el que quieres llamar a el nuevo archivo (invlcuyendo .txt)\n\t");
    scanf("%s", &nombre_archivo);
    escribir_en_archivo(nombre_archivo, nombre_original);
}
