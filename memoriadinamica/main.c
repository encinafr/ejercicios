#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;
    pNum = (int*) malloc(sizeof(int));
    if(pNum== NULL)
    {
        printf("\n No se pudo consegior memoria. El programa finaliza");
        exit(1);//
    }
    printf("Ingrese un numero:\n");
    scanf("%d",pNum);//scanf guarda en la direccion de memoria y pNum es la direccion de memoria entonces no uso el &
    //*pNum = 5;
    printf("El puntero es: %d\n\n",*pNum);

    free(pNum);//la meoria esta liberada;
    return 0;
}
