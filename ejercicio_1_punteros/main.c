#include <stdio.h>
#include <stdlib.h>
//1-	Realizar un programa  que me permita cargar y mostrar un vector de 20 enteros utilizando punteros.
#define TAM 21
int main()
{
    int enteros[TAM];
    int i;
    int* P_entero;

    P_entero=&enteros;
    printf("Ingrese 20 numeros enteros ");
   for(i=0;i<TAM-1;i++){

  //  scanf("%d",&enteros[i]);
    scanf("%d",&*(P_entero+i));
   }
   printf("Los numeros ingresados son:\n");
    for(i=0;i<TAM-1;i++){
      printf("%d\n",*(P_entero+i));
   }


    return 0;
}
