#include <stdio.h>
#include <stdlib.h>
void mifuncion(char[][20],int);
int main()
{
    char nombre[5][20]={"jUan","Carlos","pEpE","lalo","landa"};
    mifuncion(nombre,5);
    return 0;
}
void mifuncion(char mat[][20],int filas){
   int i;
    for(i=0;i<filas;i++){
    strlwr (mat[i]);//pasa todo a miniscula
    mat[i][0]=toupper(mat[i][0]);//pasa la letra a mayuscula
    printf("%s \n",mat[i]);

     }
}
