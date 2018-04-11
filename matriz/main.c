#include <stdio.h>
#include <stdlib.h>
#define CANT 3
int main()
{
  int i;
  int legajo[CANT];
  char nombre[CANT][31];
  for(i=0;i<CANT;i++){
  legajo[i]=i+1;
  printf("\nnombre:");
  fflush(stdin);
  scanf("%[^\n]",nombre[i]);

  }
  printf("\nlegajo: \tnombre\n");
  for(i=0; i<CANT;i ++){
    printf("\n %d \t\t %s",legajo[i],nombre[i]);
  }
    return 0;
}
