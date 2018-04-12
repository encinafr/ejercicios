#include <stdio.h>
#include <stdlib.h>
/*
40.  	Se registran de los empleados de una empresa Número de legajo, sueldo y sexo (1 femenino y 2 masculino).
 Diseñar en  un programa que permita informar cuantas mujeres ganan más de á 500 y cuantos hombres ganan menos de $ 400
*/
int main()
{
    int legajo;
    float sueldo;
    char sexo;
    int mujeres=0;
    int hombres=0;
    char rta='s';
    while(rta=='s'){
       printf("Ingrese el legajo:\n");
       scanf("%d",&legajo);
       printf("Ingrese el sueldo:\n");
       scanf("%f",&sueldo);
       fflush(stdin);
       printf("Ingrese el sexo F o M:\n");
       sexo=getchar();
       sexo=tolower(sexo);
       fflush(stdin);
       if(sexo=='f'&& sueldo>500){
        mujeres++;
       }if(sexo=='m'&& sueldo<400){
            hombres++;
       }
       printf("S para continuar o N para salir: ");
       rta=getchar();
       rta=tolower(rta);
    }
    printf("Las mujeres que ganan mas de 500 son: %d y los hombres que genan menos de 400 son:%d",mujeres,hombres);


    return 0;
}
