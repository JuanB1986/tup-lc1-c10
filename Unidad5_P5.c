#include <stdio.h>


void main ()
{
    printf("Suma digitos: %d",sumaDigitos(9999));
}


int sumaDigitos(int numero){

    int j,i,array[20]; 

    for (i=0;i<20;++i){
        array[i]=0;
    }
    i=0;
    array[0]=numero;
    
    while (array[i]>10){
        ++i;
        array[i]=array[i-1]/10;        
    }

    j=0;
    for (j=0; j<i+1; j++){
        array[j]= array[j] - 10*array[j+1];
    }

    int sumaDigitos=0;
    for (j=0; j<i+1; j++){
        sumaDigitos += array[j];
    }
    return sumaDigitos;
}