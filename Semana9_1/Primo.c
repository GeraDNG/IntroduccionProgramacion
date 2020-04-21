#include <stdio.h>
int main ()
{
    int c=2, n, x;
    printf("\n Dar un numero para obtener si es primo o no: ");
    scanf("%i", &n);
    if (n==2)
        printf("\n Es primo");
    else if (n%2==0)
        printf("\n No es primo");
    else if (n%2!=0)
    {
        do
        {
            x=n-1;
            c++;
        } while (c<=x);
    }
    return 0;
}
