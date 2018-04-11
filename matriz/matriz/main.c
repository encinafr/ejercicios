#include <stdio.h>
#include <stdlib.h>
#define CANT 3
int main()
{
  int i;
  int legajo[CANT];
  char nombre[CANT][31];
  float salario[CANT];
  for(i=0;i<CANT;i++){
  legajo[i]=i+1;
  printf("\nnombre:");
  fflush(stdin);
  scanf("%[^\n]",nombre[i]);
  printf("salario");
  scanf("%f",&salario[i]);

  }
  printf("\nlegajo: \tnombre\t salario");
  for(i=0; i<CANT;i ++){
    printf("\n %d \t\t %s \t %.2f",legajo[i],nombre[i],salario[i]);
  }
    return 0;
}
