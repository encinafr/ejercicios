#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int cant;
    int a,b,c,d;

    f=fopen("dataParser.txt","r");
    if(f==NULL){
        printf("No se pudo abrir el archivo\n");
        exit(EXIT_FAILURE);
    }
    while(!feof(f)){

        cant= fscanf(f,"%d,%d,%d,%d\n",&a,&b,&c,&d);

        if(cant!=4){
            if(feof(f)){
                break;
            }
            else{
                printf("No se pudo leer el archivo");
                exit(1);
            }
        }
        printf("%d,%d,%d,%d\n",a,b,c,d);
    }

    fclose(f);

    return 0;
}
