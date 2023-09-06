#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

int nro_pasajeros;
char tipo_vehiculo[100];
char  congestion[100];
float tarifa;

void main()
{
    
    printf("Ingrese tipo vehiculo: (auto / moto / camion): \n");

    strcpy(tipo_vehiculo,"");

    while ( strcmp(tipo_vehiculo,"auto") && strcmp(tipo_vehiculo,"camion") && strcmp(tipo_vehiculo,"moto")  )
    {
        scanf("%s",&tipo_vehiculo);
        if ( strcmp(tipo_vehiculo,"auto") && strcmp(tipo_vehiculo,"camion") && strcmp(tipo_vehiculo,"moto"))
        {
            printf("Entrada invalida \n");
        }
    }

    if (strcmp(tipo_vehiculo,"moto"))
    {
        printf("Ingrese nro de pasajeros: \n");
    }
    nro_pasajeros=100;

    while ((nro_pasajeros>6 || nro_pasajeros<1) && strcmp(tipo_vehiculo,"moto"))
    {
        scanf("%d", &nro_pasajeros);
        if (nro_pasajeros>5 || nro_pasajeros<1)
        {
            printf("Entrada invalida \n");
        }
    }


    printf("Ingrese tipo de congestion: (alta / baja) \n");

    strcpy(congestion,"");

    while ( strcmp(congestion,"alta") && strcmp(congestion,"baja") )
    {
        scanf("%s",&congestion);  
        if ( strcmp(congestion,"alta") && strcmp(congestion,"baja"))
        {
            printf("Entrada invalida \n");
        }          
    }


    if ( !strcmp(congestion,"alta"))
    {
        if ( !strcmp(tipo_vehiculo,"moto")) {tarifa=100.0;}

        if ( !strcmp(tipo_vehiculo,"camion")) {tarifa=300.0;}

        if ( !strcmp(tipo_vehiculo,"auto") && nro_pasajeros>2) 
        {
            tarifa=0.0;
        }
        if ( !strcmp(tipo_vehiculo,"auto") && nro_pasajeros<3) 
        {
            tarifa=200;
        }
    }
    else 
    {

        if ( !strcmp(tipo_vehiculo,"moto")) {tarifa=0.0;}

        if ( !strcmp(tipo_vehiculo,"camion")) {tarifa=200.0;}

        if ( !strcmp(tipo_vehiculo,"auto")) {tarifa=150.0;}

    }

    printf ("\n**********TICKET*********\n");
    printf("Vehiculo: %s \n", tipo_vehiculo);
    printf("Tarifa: %.2f \n", tarifa);
    printf("Congestion: %s \n",congestion );
    printf ("*************************\n");


}