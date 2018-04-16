#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{// typedef nuevo dato struct estructura
char nombre[20];
int legajo;
float sueldo;
char sexo;
}eEmpleado;

void mostrarempleado(eEmpleado emp);
int main()
{
    eEmpleado unempleado = {"Juan", 1111,1000.78,'m'};
    eEmpleado otroempleado=unempleado;

   /* unempleado.legajo=1234;
    unempleado.sexo='s';
    strcpy(unempleado.nombre,"Javier") ;
    unempleado.sueldo=3000.1212;
   */
   /*printf("ingrese nombre");
   gets(unempleado.nombre);
   printf("ingrese legajo");
   scanf("%d",&unempleado.legajo);
   */
//   mostrarempleado(unempleado);


   printf("legajo\tnombre\tsexo\tsueldo");
    printf("\n%d\t%s\t%c\t%.4f",otroempleado.legajo,otroempleado.nombre,otroempleado.sexo,otroempleado.sueldo);
    return 0;
}
void mostrarempleado(eEmpleado emp){

    printf("legajo\tnombre\tsexo\tsueldo");
    printf("\n%d\t%s\t%c\t%.4f",emp.legajo,emp.nombre,emp.sexo,emp.sueldo);

}
