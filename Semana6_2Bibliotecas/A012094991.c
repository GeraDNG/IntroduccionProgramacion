/*
    Algoritmo:
    1) Inicio.
    2) Declarar bibliotecas "stdio.h" y "tortugas".
    3) Iniciar función "main":
        3.1) Llamar a procedimiento "menu".
        3.2) Escanear valor y guardarlo en la variable "pochitoques".
        3.3) Escanear valor y guardarlo en la variable "jicoteas".
        3.4) Escanear valor y guardarlo en la variable "chiquiguaus".
        3.5) Llamar a función " set_pochitoques".
        3.6) Llamar a función " set_jicoteas".
        3.7) Llamar a función " set_chiquiguaus".
        3.8) Llamar a procedimiento "imprime_tortugas".
    4) Fin.
    --------------------------------------------------------------------
    Algoritmo de la biblioteca en su archivo "tortugas.h".
*/
#include <stdio.h>
#include "tortugas.h"
int main()
{
    menu();
    scanf("%i", &pochitoques);
    scanf("%i", &jicoteas);
    scanf("%i", &chiquiguaus);
    set_pochitoques(pochitoques);
    set_jicoteas(jicoteas);
    set_chiquiguaus(chiquiguaus);
    pochitoques = get_pochitoques();
    jicoteas = get_jicoteas();
    chiquiguaus= get_chiquiguaus();
    imprime_tortugas();
    return 0;
}
