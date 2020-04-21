//R1:
#include <stdio.h>
int main ()
{
    int a1 [15] = {1,2,3,4,35,6,7,3*a1[4]-57,a1[6]+a1[13],10,11,12,13,14,15};
    int i=0;
    for (i=0; i<15; i++)
    {
        printf("%i \t", a1[i]);
        if (i==4 || i==9)
        printf("\n");
    }
    return 0;
}
// R2: 155
// R3: Es más práctico si conocemos la cifra exacta.
// R4: Las variables al no conocer el numero exacto y los arreglos al conocer el numero.
