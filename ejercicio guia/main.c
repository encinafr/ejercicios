#include <stdio.h>
#include <stdlib.h>
/*
58.  	Leer 10 elementos de un vector de enteros y mostrar su contenido
*/
#define CANT 11
int main()
{
    char c[CANT];
    int i;
    printf("Ingrese diez caracteres:\n");
    for(i=0;i<CANT;i++){
        scanf("%c",&c[i]);
        fflush(stdin);
    }
    printf("Los caracteres ingresados son:");
    for(i=0;i<CANT;i++){
        printf("%c",c[i]);
    }
    return 0;
}
