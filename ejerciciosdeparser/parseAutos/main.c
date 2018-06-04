#include <stdio.h>
#include <stdlib.h>

int main(void)
{
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

        if(cant!=5){
            if(feof(f)){
                break;
            }
            else{
                printf("No se pudo leer el archivo");
                exit(1);
            }
        }
        id=atoi(var1);
        anio=atoi(var5);
        printf("%d,%s,%s,%s,%d\n",id,var2,var3,var4,anio);
    }
     return 0;
}
