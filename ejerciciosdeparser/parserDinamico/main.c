#include <stdio.h>
#include <stdlib.h>
typedef struct{
 int id;
 int anio;
 char Modelo[100];
 char Marca[100];
 char color[50];

}eAutos;
int main()
{
   int listSize=20;
   eAutos p;
    eAutos* autos = (eAutos*)malloc(sizeof(eAutos)*listSize);
    int index=0;
    int i;
     FILE *f;
 int cant;
 int id,anio;
 char var1[50],var3[50],var2[50],var4[50],var5[50];
 f = fopen("autos.csv","r");
 if(f==NULL){
        printf("No se pudo abrir el archivo\n");
        exit(EXIT_FAILURE);
    }
 while(!feof(f)){

        cant= fscanf(f,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5);
        for(i=0;i<cant;i++){
            autos[i].anio=atoi(var5);
            autos[i].id=atoi(var1);
            strcpy(autos[i].Marca,var2);
            strcpy(autos[i].Modelo,var3);
            strcpy(autos[i].color,var4);
        }

       autos[index]=p; // copiamos "p" a una posicion del array de estructuras.
       index++;

       // si no hay mas lugar, pedimos más memoria para hacer un array más grande
       if(index>=listSize)
       {

          listSize+=20; // agregamos dos mas
          autos = (eAutos*)realloc(autos,sizeof(eAutos)*listSize);
       }


        if(cant!=5){
            if(feof(f)){
                break;
            }
            else{
                printf("No se pudo leer el archivo");
                exit(1);
            }
        }
        for(i=0;i<cant;i++){

            printf("Id %4d Marca %18s Modelo %10s Color %5s Anio %4d\n",autos[i].id,autos[i].Marca,autos[i].Modelo,autos[i].color,autos[i].anio);
            break;
        }
    }
    return 0;
}
