#include <stdio.h>
#include <stdlib.h>
/*
  59.  	Leer 20 números enteros positivos, indicar cuál es el mayor y en qué orden fue leído (a que elemento pertenece).
   Mostrar el vector completo
*/
#define cant 20
int main()
{
    int numero[cant];
    int i;
    int max,min;
    printf("Ingrese 20 numeros positivos:\n");
    fflush(stdin);
    for(i=0;i<cant;i++){

        scanf("%d",&numero[i]);
         while(numero[i] < 0)
        {
            printf("ERROR. Reingrese el numero.\n");
            scanf("%d" , &numero[i]);
        }
    }
    max=numero[0];
    for(i=0 ; i < cant ; i++)
    {
        if(numero[i] > max)
        {
            max = numero[i];
        }
    }

    printf("\n\nPosicion de ingreso:\t\tNumeros: \n");
    for(i=0 ; i < cant ; i++)
    {
        printf(" %d\t                  -          \t%d\n" , i , numero[i]);
    }

    printf("\nEl maximo es: %d\n" , max);

    return 0;
}

