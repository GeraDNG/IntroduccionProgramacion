#include <stdio.h> // Se incluye para el uso del "printf" y "scanf"
void menu (void)  //Procedimiento para mostrar las opciones
{
    printf("\n MENU:");
    printf("\n \t 1. Aproximacion del valor de PI.");
    printf("\n \t 2. Salir.");
}
float aproximacion_PI (long int n) //Funcion que determina valor de PI
{
    float c = 1, res=1; // Se declaran valores
    while (c <= n) //mientras que C sea menor o igual que N
    {
        c=c+2; // C sera igual al antiguo valor de C mas dos
        res = res + ((float)-1.0/c); // res sera igual al antiguo valor de res más division de -1 entre c
        c=c+2; // C sera igual al antiguo valor de C mas dos
        res = res + ((float)1.0/c);  // res sera igual al antiguo valor de res más division de 1 entre c
    }
    res=4*res; //res sera igual al antiguo valor de res por 4
    printf("\n El valor obtenido es de: %f \n\n", res);
    return res;
}
int main ()
{
    int o, n; //declaracion de variables
    float res;
    menu(); //llamada a funcion menu
    printf("\n Que opcion desea? ");
    scanf("%i", &o);
    switch (o)
    {
    case 1:
        printf("\n Dar el numero limite: ");
        scanf("%i", &n);
        res = aproximacion_PI(n); //llamada a funcion aproximacion_PI
        printf("\n El valor obtenido es de: %f \n\n", res);
        break;
    case 2:
        printf("\n Apagando...\n\n");
        break;
    default:
        printf("\n Numero incorrecto.\n\n");
        break;
    }
    return 0;
}
