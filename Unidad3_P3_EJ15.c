#include <stdio.h>

void main(){

    int i,j;
    float ingreso,promedio, prom_gen;
    const int CANT_ALUMOS = 5;

    prom_gen=0.0;
    
    for (i=0;i<CANT_ALUMOS;++i){

        promedio=0.0;

        for (j=0;j<3;j++){

                printf ("Ingrese nota: %d \n", j+1);
                scanf("%f",&ingreso);
                promedio += ingreso;

        }
        promedio /=3.0;
        printf ("Promedio alumno %.1f \n", promedio);
        prom_gen += promedio;
  
    }
    prom_gen /= CANT_ALUMOS;
    printf("Promedio General %.1f \n", prom_gen);

}