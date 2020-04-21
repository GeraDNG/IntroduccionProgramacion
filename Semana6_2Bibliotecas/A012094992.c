#include <stdio.h>
#include "A012094992.h"
int main()
{
    printf("\n Se dara la ruta para ir manejando de un punto a otro.");
    printf("\n Las opciones a elegir son: \n");
    opciones(); //Llamada a procedimiento de bibloteca.
    printf("\n\n Donde esta? (Dar el numero correspondiente): ");
    scanf("%i", &Origen);
    while (Origen > 6 && Origen < 1)
    {
        Incorrecto(); //Llamada a procedimieto de biblioteca.
        break;
    }
    printf("\n A donde quiere ir? (Dar el numero correspondiente): ");
    scanf("%i", &Destino);
    while (Destino > 6 && Destino < 1)
    {
        Incorrecto(); //Llamada a procedimieto de biblioteca.
        break;
    }
    while (Destino == Origen)
    {
        printf("\n Ha dado el mismo numero. \n\n");
        break;
    }
    if (Origen == 5 && Destino == 1)
    {
        printf("\n De acuerdo, se dara la guia del TEC al departamento: \n");
        TEC_Depa(); //Llamada a procedimieto de biblioteca.
        printf("\n Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no) ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Depa_TEC(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el TEC. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 1 && Destino == 5)
    {
        printf("\n De acuerdo, se dara la guia del departamento al TEC: \n");
        Depa_TEC(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            TEC_Depa(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el departamento. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 1 && Destino == 2)
    {
        printf("\n De acuerdo, se dara la guia del departamento a la caseta de vigilancia: \n");
        Depa_Caseta(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Caseta_Depa(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el departamento. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen ==  2 && Destino == 1)
    {
        printf("\n De acuerdo, se dara la guia de la caseta de vigilancia al departamento: \n");
        Caseta_Depa(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Depa_Caseta(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en la caseta. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 1 && Destino == 3)
    {
        printf("\n De acuerdo, se dara la guia del departamento al Oxxo: \n");
        Depa_Oxxo(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Oxxo_Depa(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el departamento. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 3 && Destino == 1)
    {
        printf("\n De acuerdo, se dara la guia del Oxxo al departamento: \n");
        Oxxo_Depa(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Depa_Oxxo(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el Oxxo. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 1 && Destino == 4)
    {
        printf("\n De acuerdo, se dara la guia del depa a Soriana: \n");
        Depa_Soriana(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Soriana_Depa(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en Soriana. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 4 && Destino == 1)
    {
        printf("\n De acuerdo, se dara la guia de Soriana al departamento: \n");
        Soriana_Depa(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Depa_Soriana(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en Soriana. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 2 && Destino == 3)
    {
        printf("\n De acuerdo, se dara la guia de la caseta al Oxxo: \n");
        Caseta_Oxxo(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Oxxo_Caseta(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en la caseta. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 3 && Destino == 2)
    {
        printf("\n De acuerdo, se dara la guia del Oxxo a la caseta: \n");
        Oxxo_Caseta(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Caseta_Oxxo(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el Oxxo. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 2 && Destino == 4)
    {
        printf("\n De acuerdo, se dara la guia de la caseta a Soriana: \n");
        Caseta_Soriana(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Soriana_Caseta(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en la caseta. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 4 && Destino == 2)
    {
        printf("\n De acuerdo, se dara la guia de Soriana a la caseta: \n");
        Soriana_Caseta(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Caseta_Soriana(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en Soriana. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 2 && Destino == 5)
    {
        printf("\n De acuerdo, se dara la guia de la caseta al TEC: \n");
        Caseta_TEC(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            TEC_Caseta(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en la caseta. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 5 && Destino == 2)
    {
        printf("\n De acuerdo, se dara la guia del TEC a la caseta: \n");
        TEC_Caseta(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Caseta_TEC(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el TEC. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 3 && Destino == 4)
    {
        printf("\n De acuerdo, se dara la guia del Oxxo a Soriana: \n");
        Oxxo_Soriana(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Soriana_Oxxo(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el Oxxo. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 4 && Destino == 3)
    {
        printf("\n De acuerdo, se dara la guia de Soriana al Oxxo: \n");
        Soriana_Oxxo(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Oxxo_Soriana(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en Soriana. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 3 && Destino == 5)
    {
        printf("\n De acuerdo, se dara la guia del Oxxo al TEC: \n");
        Oxxo_TEC();//Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            TEC_Oxxo(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el Oxxo. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 5 && Destino == 3)
    {
        printf("\n De acuerdo, se dara la guia del TEC al Oxxo: \n");
        TEC_Oxxo(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Oxxo_TEC(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el TEC. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 4 && Destino == 5)
    {
        printf("\n De acuerdo, se dara la guia de Soriana al TEC: \n");
        Soriana_TEC(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            TEC_Soriana(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en Soriana. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    else if (Origen == 5 && Destino == 4)
    {
        printf("\n De acuerdo, se dara la guia del TEC a Soriana: \n");
        TEC_Soriana(); //Llamada a procedimieto de biblioteca.
        printf("Si ha llegado a su destino, Desea la ruta de regreso? (1 para si o 0 para no)  ");
        scanf("%i", &Regreso);
        if (Regreso != 0 && Regreso != 1)
            Incorrecto();
        else if (Regreso == 1)
        {
            printf("\n\n De acuerdo, Su ruta a seguir es: \n");
            Soriana_TEC(); //Llamada a procedimieto de biblioteca.
            printf("\n Listo, esta de regreso en el TEC. \n\n");
            printf("\n Apagando... \n\n");
        }
        else if (Regreso == 0)
            printf("\n\n Apagando... \n\n");
    }
    return 0;
}
