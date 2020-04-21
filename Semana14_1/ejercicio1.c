#include <stdio.h>
int main ()
{
    FILE * lee = fopen("cancion.txt", "r");
    char arg [50];
    while (!feof(lee))
    {
        fgets(arg, 50, lee);
        puts(arg);
        /*fscanf(lee, "%s", arg);
        puts(arg);*/
    }
    return 0;
}
