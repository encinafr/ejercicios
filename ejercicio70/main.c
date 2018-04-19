#include <stdio.h>
#include <stdlib.h>
/*
   70.Inicializar a cero una matriz de 6 filas por 5 columnas.
    Cargar valores enteros en un elemento determinado,
    para lo cual se debe informar número de fila y de columna y luego ingresar el valor a cargar.
    Mostrar fa matriz por filas y fuego por columnas
*/
#define FILAS 2
#define COLUM 3

int main()
{
    int matriz[FILAS][COLUM]={{0,0,0,0,0},{0,0,0,0,0}};
    int i,j;
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUM;j++){
          printf("Ingrese el numero en la fila [%d] y columna [%d]",i+1,j+1);
          scanf("%d",&matriz[i][j]);
        }

    }
    printf("Los numeros ingresados ordenados por fila y columna son:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUM;j++){
          printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}
