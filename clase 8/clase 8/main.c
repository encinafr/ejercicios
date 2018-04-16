#include <stdio.h>
#include <stdlib.h>
void mifuncion(char[][20],int);
int main()
{
    char nombre[5][20]={"jUan joSe","Carlos ","pEpE","lalo","landa"};
    mifuncion(nombre,5);
    return 0;
}
void mifuncion(char mat[][20],int filas){
   int i,k;
    for(i=0;i<filas;i++){
    strlwr (mat[i]);//pasa todo a miniscula
    for(k=0;k<20;k++){ //este for me permite pasar la inicial del segundo nombre en mayuscula
        if(mat[i][k] ==' '){
            mat[i][k+1] = toupper(mat[i][k+1]);//k recorre el vector y es k+a por que encuentra un espacio y el que tiene adelante es el pone en mayuscula
        }
    }
    mat[i][0]=toupper(mat[i][0]);//pasa la letra a mayuscula
    printf("%s \n",mat[i]);

     }
}
