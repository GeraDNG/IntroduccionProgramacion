#ifndef A012094992_H_INCLUDED
#define A012094992_H_INCLUDED
int Origen, Destino, Regreso; // Se definen las variables a usar.
void opciones (void) //Procedimiento que solo imprimira al requerirse en el codigo. Solo muestra las opciones.
{
    printf("\n \t 1) Departamento.");
    printf("\n \t 2) Caseta de vigilancia de la colonia.");
    printf("\n \t 3) Oxxo (de Felipe Angeles).");
    printf("\n \t 4) Soriana (Retorno, entre con Bernardo Quintana y Ezequiel Montes).");
    printf("\n \t 5) TEC.");
    return;
}
void Incorrecto (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n Ha dado un numero invalido. \n\n");
    return;
}
void Depa_Caseta (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del departamento.");
    printf("\n 2) Girar a la derecha y continuar.");
    printf("\n 3) Dar vuelta a la derecha en la primer esquina.");
    printf("\n 4) Dar vuelta a la izquierda por la calle principal de la colonia.");
    printf("\n 5) Continuar derecho hasta llegar a la caseta de vigilancia.");
    printf("\n 6) Ha llegado. Fin de la ruta. \n\n");
    return;
}
void Depa_Oxxo (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del departamento e ir todo derecho hasta la caseta de vigilancia.");
    printf("\n 2) En la caseta, dar vuelta a la izquierda por Felipe Angeles.");
    printf("\n 3) Continuar todo derecho hasta llegar al Oxxo.");
    printf("\n 4) Estacioanrse. Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Depa_Soriana (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del departamento e ir todo derecho hasta la caseta de vigilancia.");
    printf("\n 2) En la caseta, dar vuelta a la izquierda por Felipe Angeles hasta el Oxxo.");
    printf("\n 3) Dar vuelta a la izquierda en el Oxxo y continuar hasta Ezequiel Montes.");
    printf("\n 4) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 5) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 6) Continuar hasta la entrada de Soriana.");
    printf("\n 7) Entrar al estacionamiento.");
    printf("\n 8) Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Depa_TEC (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del departamento e ir todo derecho hasta la caseta de vigilancia.");
    printf("\n 2) En la caseta, dar vuelta a la izquierda por Felipe Angeles hasta el Oxxo.");
    printf("\n 3) Dar vuelta a la izquierda en el Oxxo y continuar hasta Ezequiel Montes.");
    printf("\n 4) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 5) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 6) Continuar hasta la entrada del TEC.");
    printf("\n 7) Entrar al TEC. \n\n");
    return;
}
void TEC_Depa (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del TEC y dar vuelta a la derecha por Ezequiel Montes.");
    printf("\n 2) En Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 3) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 4) Dar vuelta a la derecha en el Oxxo y continuar por Felipe Angeles.");
    printf("\n 5) Dar vuelta a la derecha en la caseta de vigilancia.");
    printf("\n 6) Continuar hasta la entrada del departamento.");
    printf("\n 7) Entrar al departamento. \n\n");
    return;
}
void TEC_Soriana (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del TEC y dar vuelta a la derecha por Ezequiel Montes.");
    printf("\n 2) En Epigmenio Gonzalez, dar una vuelta en U.");
    printf("\n 3) Continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 5) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 6) Continuar hasta la entrada de Soriana.");
    printf("\n 7) Entrar al estacionamiento.");
    printf("\n 8) Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void TEC_Oxxo (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del TEC y dar vuelta a la derecha por Ezequiel Montes.");
    printf("\n 2) En Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 3) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 4) Estacioanrse. Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void TEC_Caseta (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del TEC y dar vuelta a la derecha por Ezequiel Montes.");
    printf("\n 2) En Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 3) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 4) Dar vuelta a la derecha en el Oxxo y continuar por Felipe Angeles.");
    printf("\n 5) Dar vuelta a la derecha en la caseta de vigilancia.");
    printf("\n 6) Ha llegado a su destino. Fin de la ruta \n\n");
    return;
}
void Caseta_TEC (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) En la caseta, dar vuelta a la izquierda por Felipe Angeles hasta el Oxxo.");
    printf("\n 2) Dar vuelta a la izquierda en el Oxxo y continuar hasta Ezequiel Montes.");
    printf("\n 3) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 4) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 5) Continuar hasta la entrada del TEC.");
    printf("\n 6) Entrar al TEC. \n\n");
    return;
}
void Caseta_Depa (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Continuar derecho por la calle principal de la colonia.");
    printf("\n 2) Girar a la derecha y continuar por la primera a la izquierda.");
    printf("\n 3) Continuar derecho hasta llegar al departamento.");
    printf("\n 4) Estacionarse. Ha llegado. Fin de la ruta. \n\n");
    return;
}
void Oxxo_Depa (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del Oxxo y continuar por Felipe Angeles.");
    printf("\n 2) Dar vuelta a la derecha en la caseta de vigilancia.");
    printf("\n 3) Continuar hasta la entrada del departamento.");
    printf("\n 4) Estacionarse. Ha llegado. Fin de la ruta. \n\n");
    return;
}
void Soriana_Depa (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del estacionamiento de Soriana y dar vuelta a la derecha .");
    printf("\n 2) Continuar por por Ezequiel Montes.");
    printf("\n 3) En la equina con Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 4) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 5) Dar vuelta a la derecha en el Oxxo y continuar por Felipe Angeles.");
    printf("\n 6) Dar vuelta a la derecha en la caseta de vigilancia.");
    printf("\n 7) Continuar hasta la entrada del departamento.");
    printf("\n 8) Entrar al departamento. \n\n");
    return;
}
void Caseta_Oxxo (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) En la caseta, dar vuelta a la izquierda por Felipe Angeles.");
    printf("\n 2) Continuar todo derecho hasta llegar al Oxxo.");
    printf("\n 3) Estacioanrse. Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Oxxo_Caseta (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del Oxxo y dar vuelta a la derecha.");
    printf("\n 2) Continuar por Felipe Angeles hasta la caseta.");
    printf("\n 3) Girar hacia la caseta de vigilancia.");
    printf("\n 4) Ha llegado. Fin de la ruta. \n\n");
    return;
}
void Oxxo_TEC (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 3) Salir del Oxxo y dar vuelta a la izquierda en Epigmenio Gonzalez.");
    printf("\n 4) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 5) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 6) Continuar hasta la entrada del TEC.");
    printf("\n 7) Entrar al TEC. \n\n");
    return;
}
void Caseta_Soriana (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) En la caseta, dar vuelta a la izquierda por Felipe Angeles hasta el Oxxo.");
    printf("\n 2) Dar vuelta a la izquierda en el Oxxo y continuar hasta Ezequiel Montes.");
    printf("\n 3) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 4) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 5) Continuar hasta la entrada de Soriana.");
    printf("\n 6) Entrar al estacionamiento.");
    printf("\n 7) Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Soriana_Caseta (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del estacionamiento y dar vuelta a la derecha.");
    printf("\n 2) Continuar por por Ezequiel Montes.");
    printf("\n 3) En Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 4) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 5) Dar vuelta a la derecha en el Oxxo y continuar por Felipe Angeles.");
    printf("\n 6) Dar vuelta a la derecha en la caseta de vigilancia.");
    printf("\n 7) Ha llegado a su destino. Fin de la ruta \n\n");
    return;
}
void Soriana_Oxxo (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del estacionamiento y dar vuelta a la derecha.");
    printf("\n 2) Continuar por por Ezequiel Montes.");
    printf("\n 3) En Epigmenio Gonzalez, dar vuelta a la izquierda.");
    printf("\n 4) Continuar por Epigmenio Gonzalez hasta el Oxxo.");
    printf("\n 5) Estacioanrse. Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Soriana_TEC (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) Salir del estacionamiento y dar vuelta a la derecha.");
    printf("\n 2) Continuar por por Ezequiel Montes hasta la entrada del TEC.");
    printf("\n 3) Entrar al TEC. Estacioanrse. Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
void Oxxo_Soriana (void)  //Procedimiento que solo imprimira cuando sea necesario, de acuerdo a la interaccion del usuario.
{
    printf("\n 1) En el Oxxo, dar vuelta a la izquierda por Epigmenio Gonzalez.");
    printf("\n 2) Dar vuelta a la derecha y continuar por Ezequiel Montes hasta el retorno.");
    printf("\n 3) Dar vuelta en U en el retorno de Soriana.");
    printf("\n 4) Continuar hasta la entrada de Soriana.");
    printf("\n 5) Entrar al estacionamiento.");
    printf("\n 6) Ha llegado a su destino. Fin de la ruta. \n\n");
    return;
}
#endif // A012094992_H_INCLUDED
