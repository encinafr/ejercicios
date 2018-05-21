#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
       int* vec;
       int* aux;
  // float* vec;
  //char* vec;
    int i;
  //  vec = (int*)malloc(TAM*sizeof(int));//para un vector de 5 elementos
    vec = (int*)calloc(TAM,sizeof(int));//para un vector de 5 elementos
   // vec = (int*)calloc(TAM,sizeof(float));//para un vector de 5 elementos
       // vec = (char*)calloc(TAM,sizeof(char));//para un vector de 5 elementos



     if(vec==NULL)
     {
        printf("\n No se pudo conseguir memoria\n\n");
        system("pause");
        exit(1);
     }
  for(i=0;i< TAM; i++)
     {
         printf("Ingrese un numero\n");
         scanf("%d",vec + i);
     }
       for(i=0;i< TAM; i++)
     {
         printf("%d\n", *(vec + i) );

     }
     aux =(int*) realloc(vec,10*sizeof(int));
     if(aux == NULL)
     {
         printf("\n\n No se pudo conseguir memoria");
         system("pause");
         exit(1);
     }else
     {
         vec=aux;
     }for(i=5;i< (TAM+5); i++)
     {
         printf("Ingrese un numero\n");
         scanf("%d",vec + i);
     }
       for(i=0;i< (TAM+5); i++)
     {
         printf("%d\n", *(vec + i) );

     }
     free(vec);
     return 0;
}
