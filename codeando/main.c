#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
11.  	Escribir un programa que realice lea por teclado 20 caracteres.
Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
*/

int main()
{
    char caract;
    int i;
    int contA=0;
    int contE=0;
    int contI=0;
    int contO=0;
    int contU=0;
    for(i=0;i<20;i++){
        printf("Ingrese un caracter: \n ");
        scanf("%c",&caract);
         fflush(stdin);
        caract = tolower(caract);
        switch(caract){
         case'a':
            contA++;
            break;
         case 'e':
            contE++;
            break;
         case 'i':
            contI++;
            break;
         case 'o':
            contO++;
            break;
         case 'u':
            contU++;
            break;

        }


    }
   printf("\n cantidadde a:\tcantidad de e:\tcantidad de i:\tcantidad de o:\t cantidad de u:");
   printf("\n    %d\t\t     %d\t\t     %d\t\t      %d\t\t      %d",contA,contE,contI,contO,contU);


    return 0;
}
