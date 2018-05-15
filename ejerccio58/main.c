#include <stdio.h>
#include <stdlib.h>
/*
8.  	Leer 10 elementos de un vector de enteros y mostrar su contenido

*/

int main()
{
    int enteros[11]={1,2,3,4,5,6,7,8,9,10};
    int i;
     printf("Los numeros son:");
    for(i=0;i<10;i++)
    {
        printf("%d",enteros[i]);
    }
    //printf("Los enteros son:%d %d %d %d %d %d %d %d %d %d",enteros[0],enteros[1],enteros[2],enteros[3],enteros[4],enteros[5],enteros[6],enteros[7],enteros[8],enteros[9]);
    return 0;
}
