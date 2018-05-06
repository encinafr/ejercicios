#include <stdio.h>
#include <stdlib.h>
#include "myfuncion.h"
#define cant 50
int main()
{
   char vec[cant];
   /* char dato[15];
    int datoInt, i, flag, cant;

    printf("Ingrese el dato: ");
    scanf("%s", dato);

    flag = 0;
    cant = strlen(dato);

    for(i=0; i<cant; i++){
        if(!isdigit(dato[i])){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\nERROR, a ingresado una letra");

    }
*/
printf("ingrese un numero: ");
scanf("%s",vec);
 verificaNumero(vec);
    return 0;
}
