#include <string.h>
#include <math.h>
#include <stdio.h>

float numero1, numero2,resultado;
int menu;

void main () 
{
    menu=0;
    printf("\nMenu de Operaciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
    printf("Seleccione una operacion: ");
    scanf("%d", &menu);

    if (menu==5)
        return;

    printf("Ingrese el primer numero \n");
    scanf("%f", &numero1);
    
    printf("Ingrese el segundo numero \n");
    scanf("%f", &numero2);


    switch (menu)
    {
        case 1:
            resultado=numero1+numero2;
        break;
        case 2:
            resultado=numero1-numero2;
        break;
        case 3:
            resultado=numero1*numero2;
        break;
        case 4:
            if (numero2 != 0.0)
                {resultado=numero1/numero2;}
            
        break;
        default:
            printf("Ingreso invalido \n");
        break;
    }
    
    if (numero2 == 0.0 && menu==4)
    {
        printf ("Division por cero \n");
    }
    else
    {
        printf ("%.1f", resultado);
    }   


}