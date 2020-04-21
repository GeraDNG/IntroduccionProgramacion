/*
    Algoritmo:
    1) Inicio.
    2) Declarar las variables "pochitoques", "jicoteas" y "chiquiguaus" de tipo "int".
    3) Iniciar procedimiento "menu":
        3.1) Imprimir "Introduce el numero de pochitoques, jicoteas y chiquiguaus:".
    4) Iniciar procedimiento "imprime_tortugas":
        4.1) Imprimir "Hay X pochitoques".
        4.1) Imprimir "Hay Y jicoteas".
        4.1) Imprimir "Hay Z chiquiguaus".
    5) Iniciar procedimiento "set_pochitoques":
        5.1) Declarar que "pochitoques" sea igual a "pochitoques".
        5.2) Regresar.
    6) Iniciar procedimiento "set_jicoteas":
        6.1) Declarar que "jicoteas" sea igual a "jicoteas".
        6.2) Regresar.
    7) Iniciar procedimiento "set_chiquiguaus":
        7.1) Declarar que "chiquiguaus" sea igual a "chiquiguaus".
        7.2) Regresar.
    8) Iniciar función "get_pochitoques":
        8.1) Regresar "pochitoques".
    9) Iniciar función "get_jicoteas":
        9.1) Regresar "jicoteas".
    10) Iniciar función "get_chiquiguaus":
        10.1) Regresar "chiquiguaus".

*/
#ifndef TORTUGA_H_INCLUDED
#define TORTUGA_H_INCLUDED
int pochitoques, jicoteas, chiquiguaus;
void menu (void)
{
    printf("\n Introduce el numero de pochitoques, jicoteas y chiquiguaus: \n ");
}
void imprime_tortugas (void)
{
    printf("\n Hay %i pochitoques.", get_pochitoques());
    printf("\n Hay %i jicoteas.", get_jicoteas());
    printf("\n Hay %i chiquiguaus.", get_chiquiguaus());
    return;
}
void set_pochitoques (int pochitoques)
{
    pochitoques = pochitoques;
    return;
}
void set_jicoteas (int jicoteas)
{
    jicoteas = jicoteas;
    return;
}
void set_chiquiguaus (int chiquiguaus)
{
    chiquiguaus = chiquiguaus;
    return;
}
int get_pochitoques ()
{
    return pochitoques;
}
int get_jicoteas ()
{
    return jicoteas;
}
int get_chiquiguaus ()
{
    return chiquiguaus;
}
#endif // TORTUGA_H_INCLUDED
