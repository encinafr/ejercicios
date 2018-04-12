#include <stdio.h>
#include <stdlib.h>
/*
12.  	Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay.
*/

int main()
{
    int i=-1;
    int contimpares=0;
    int contpares=0;
    while(i<99){
        i=i+2;
        printf("%d \n",i);
        if(i %2==0){
            contpares++;
        }else{
        contimpares++;
        }
    }
    printf("la cantidad de impares es: %d",contimpares);
    return 0;
}
