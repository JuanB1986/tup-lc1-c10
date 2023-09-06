#include <stdio.h>
#include <math.h>
#include <string.h>

int n1, n2, n3;
int vector[3];
int i;
void main () {

    for (i=1;i<4;++i)
    {
        printf ("Ingrese Nro %d \n",i);
        scanf("%d", &vector[i-1]);
    }

    n1 = vector[0];
    n2 = vector[1];
    n3 = vector[2];

    if ( (n1 > n2) && (n1 > n3) )
    {
        printf ("El nr1 es mayor \n");
    }
    if ((n2 > n3) && (n2 > n1))
    {
        printf ("El nro 2 es mayor \n");
    }    
    if ((n3>n2) && (n3>n1))
    {
       printf ("El nro 3 es mayor \n");
    }

}