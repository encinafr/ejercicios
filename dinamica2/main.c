#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
   // int* vec;
  // float* vec;
  char* vec;
    int i;
  //  vec = (int*)malloc(TAM*sizeof(int));//para un vector de 5 elementos
    //vec = (int*)calloc(TAM,sizeof(int));//para un vector de 5 elementos
   // vec = (int*)calloc(TAM,sizeof(float));//para un vector de 5 elementos
        vec = (char*)calloc(TAM,sizeof(char));//para un vector de 5 elementos



     if(vec==NULL)
     {
        printf("\n No se pudo conseguir memoria\n\n");
        system("pause");
        exit(1);
     }
/*for(i=0;i< TAM; i++)
     {
         printf("Ingrese un numero\n");
         scanf("%d",vec + i);
     */
       for(i=0;i< TAM; i++)
     {
         printf("%d\n", *(vec + i) );

     }
     free(vec);
    return 0;
}
