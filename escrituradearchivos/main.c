#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    int cant,cant1,cant2,i;
    int numeros;
    int numAguardar[10];

   // texto = (char*)malloc(sizeof(char));

    pArchivo = fopen("Texto.txt","w");

    if(pArchivo == NULL)
    {
        printf("No se pudo abrir el archico");
        exit(1);
    }
    else{

            for(i=0;i<10;i++){
                printf("Ingrese numeros:\n");
                scanf("%d",&numeros);
                fwrite(&numeros,sizeof(int),1,pArchivo);
            }
         fclose(pArchivo);
        }

    pArchivo = fopen("Texto.txt","r");
    if(pArchivo == NULL){
        printf("Error al abrir el archivo");
    }else{
        i=0;
        while(!feof(pArchivo)){
            cant2 = fread(&numAguardar[i],sizeof(int),1,pArchivo);
             i++;
        }
    fclose(pArchivo);
    }
            printf("Los numeros ingresados son:\n");

    for(i=0;i<10;i++){
        printf("%d", numAguardar[i]);
    }

    return 0;
}
/*
FILE *parch;
char texto[ ]="Prueba de escritura";
int cant , longi;
if((parch=fopen("prueba.txt","w"))==NULL) //Se abre en modo escritura
{
printf("\nEl archivo no puede ser abierto");
exit (1);
}
longi=strlen (texto );
cant=fwrite ( texto , sizeof ( char ) , longi , parch ); //Se escribe al archivo
if (cant<longi)
printf("\nError al escribir el archivo");
else
printf("\nSe escribieron %d caracteres", cant);
fclose(parch);
*/
