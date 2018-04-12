#include <stdio.h>
#include <stdlib.h>
/*
26.  	Diseñar en  un programa que permita registrar de los empleados de una fábrica
(no se sabe cuántos) su peso y saber cuántos pesan hasta 80 kg.
 inclusive y cuantos pesan más de 80 kg.

*/

int main()
{
    int peso;
    int pesomayor=0;
    int pesomenor=0;
    char rta='s';
    while(rta=='s'){

        printf("Ingrese el peso del empleado: ");
        scanf("%d",&peso);
        fflush(stdin);

        if(peso>80){
            pesomayor++;
        }else{
            pesomenor++;
        }
        printf("Ingrese S para continuar N para salir:");
        scanf("%c",&rta);
        rta=tolower(rta);


    }
    printf("Los pesos mayores a 80 son:%d y los menores o iguales a 80 son :%d",pesomayor,pesomenor);

}
