#include <string.h>
#include <math.h>
#include <stdio.h>

const float PRECIO_VENTA=4600.0;
int dni;
int cant_cuotas;
int medio_pago;
int tipo_tarjeta;
int cant_cuotas;
float interes;
float total_a_pagar;


void main ()
{
    dni=0;
    printf ("Ingrese DNI: \n");
    while(dni < 1000000 || dni > 99999999)
    {        
        scanf("%d", &dni);      
        if (dni < 1000000 || dni > 99999999)
        {
            printf ("Valor inválido, vuelva a ingresar \n");
        }
    }

    medio_pago=0;
    printf ("\n Ingrese medio de pago: \n");
    printf ("1- Efectivo \n");
    printf ("2- Tarjeta \n");

    while (medio_pago > 2 || medio_pago <1)    
     {
        scanf ("%d",&medio_pago);
        
        if (medio_pago > 2 || medio_pago < 1)
        {
            printf ("Valor inválido, vuelva a ingresar \n");
        }
    }


    interes=0.0;
    tipo_tarjeta=0;
    if (medio_pago==2)
    {   
        tipo_tarjeta=0;
        printf ("\n Seleccionar tarjeta: \n");
        printf ("1- Visa \n");
        printf ("2- American Express \n");
        printf ("3- Mercado Pago \n");
        printf ("4- Cabal \n"); 
        while(tipo_tarjeta<1 || tipo_tarjeta>4){            
   
            scanf("%d",&tipo_tarjeta);
            if (tipo_tarjeta<1 || tipo_tarjeta>4)
            {
                printf ("Valor inválido, vuelva a ingresar \n");
            }
        }

        cant_cuotas=0;
        printf ("\n Ingresar cantidad de cuotas: (1, 3, 6 o 12) \n");
        while (cant_cuotas!=1 && cant_cuotas!=3 && cant_cuotas!=6 && cant_cuotas!=12)
        {
            scanf("%d", &cant_cuotas);
            if (cant_cuotas!=1 && cant_cuotas!=3 && cant_cuotas!=6 && cant_cuotas!=12)
            {
                printf ("Valor inválido, vuelva a ingresar \n");
            }
        }

        switch (cant_cuotas)
        {
            case 1:
                interes=0.0;
            break;
            case 3:
                interes=4.0;
            break;
            case 6:
                interes=8.0;
            break;
            case 12:
                interes=8.0;
            break;
        }

    }

    total_a_pagar=PRECIO_VENTA + PRECIO_VENTA*interes/100.0;

    printf ("\n*************RESUMEN************** \n");
    printf("DNI: %d \n",dni);

    printf ("Medio de pago: ");
    switch (medio_pago)
    {
        case 1:
            printf("Efectivo \n");
        break;
        case 2:
            printf("Tarjeta \n");
        break;
    }


    printf ("Tarjeta: ");
    switch (tipo_tarjeta)
    {   
        case 1:
            printf ("Visa \n");
        break;
        case 2:    
            printf ("American Express \n");
        break;
        case 3:
            printf ("Mercado Pago \n");
        break;
        case 4:
            printf ("Cabal \n"); 
        break;
        default:
            printf (" --- \n");
        break;
    }
    printf ("Cuotas: %d \n\n",cant_cuotas);
    printf("Total: $ %.2f ",total_a_pagar);
    printf ("\n********************************** \n");
}