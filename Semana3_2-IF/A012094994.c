#include <stdio.h>
int main ()
{
    int Mes, Dia;
    printf("\n Se dira tu signo zodiacal al introducir tu fecha de nacimiento.");
    printf("\n Introducir numero del mes de nacimiento: ");
    scanf("%i", &Mes);
    do
    {
        printf("\n Se dio un numero no valido. Dar nuevamente: ");
        scanf("%i", &Mes);
    }
    while (Mes <= 0 || Mes >= 13);
    printf("\n Introducir dia de nacimiento: ");
    scanf("%i", &Dia);
    if (Mes == 1)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 20)
            printf("\n \t Su signo es capricornio.\n\n");
        else if (Dia <20 && Dia < 31)
            printf("\n \t Su signo es acuario.\n\n");
    }
    if (Mes == 2)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
        scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 29);
        if (Dia >= 1 && Dia <= 19)
            printf("\n \t Su signo es acuario.\n\n");
        else if (Dia <= 20 && Dia < 29)
            printf("\n \t Su signo es piscis.\n\n");
    }
    if (Mes == 3)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 20)
            printf("\n \t Su signo es piscis.\n\n");
        else if (Dia <= 21 && Dia < 31)
            printf("\n \t Su signo es aries.\n\n");
    }
    if (Mes == 4)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 30);
        if (Dia >= 1 && Dia <= 20)
            printf("\n \t Su signo es aries.\n\n");
        else if (Dia <= 21 && Dia < 30)
            printf("\n \t Su signo es tauro.\n\n");
    }
    if (Mes == 5)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 21)
            printf("\n \t Su signo es tauro.\n\n");
        else if (Dia <= 22 && Dia < 31)
            printf("\n \t Su signo es geminis.\n\n");
    }
    if (Mes == 6)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 30);
        if (Dia >= 1 && Dia <= 21)
            printf("\n \t Su signo es geminis.\n\n");
        else if (Dia <= 22 && Dia < 30)
            printf("\n \t Su signo es cancer.\n\n");
    }
    if (Mes == 7)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 23)
            printf("\n \t Su signo es cancer.\n\n");
        else if (Dia <= 24 && Dia < 31)
            printf("\n \t Su signo es leo.\n\n");
    }
    if (Mes == 8)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 23)
            printf("\n \t Su signo es leo.\n\n");
        else if (Dia <= 24 && Dia < 31)
            printf("\n \t Su signo es virgo.\n\n");
    }
    if (Mes == 9)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 30);
        if (Dia >= 1 && Dia <= 23)
            printf("\n \t Su signo es virgo.\n\n");
        else if (Dia <= 24 && Dia < 30)
            printf("\n \t Su signo es libra.\n\n");
    }
    if (Mes == 10)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 23)
            printf("\n \t Su signo es libra.\n\n");
        else if (Dia <= 24 && Dia < 31)
            printf("\n \t Su signo es escorpion.\n\n");
    }
    if (Mes == 11)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 30);
        if (Dia >= 1 && Dia <= 22)
            printf("\n \t Su signo es escorpion.\n\n");
        else if (Dia <= 23 && Dia < 30)
            printf("\n \t Su signo es sagitario.\n\n");
    }
    if (Mes == 12)
    {
        do
        {
            printf("\n Se dio un numero no valido. Dar nuevamente: ");
            scanf("%i", &Dia);
        } while (Dia < 1 || Dia > 31);
        if (Dia >= 1 && Dia <= 21)
            printf("\n \t Su signo es saguitario.\n\n");
        else if (Dia <= 22 && Dia < 31)
            printf("\n \t Su signo es capricornio.\n\n");
    }

    return 0;
}
