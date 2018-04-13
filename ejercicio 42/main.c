#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/*
   42.  	Se ingresa por consola la cantidad de agua caída,
   en milímetros día a día durante un mes. Se pide determinar el día de mayor lluvia, el de menor y el promedio
*/
int main()
{
    float agua;
    float promedio;
    char dia[20];
    int max,min;
    char diamax[20];
    char diamen[20];
    int i;
    int acumagua=0;
    for(i=0;i<30;i++){
       printf("Ingrese la cantidad de agua:\n");
       scanf("%f",&agua);
       fflush(stdin);
        printf("Ingrese el dia:\n");
       gets(dia);
       //strupr(dia);
       if(i==0){
        max=agua;
        min=agua;
        strcpy(diamax,dia);
        strcpy(diamen,dia);
       }else
       {   if(agua>max){
               max=agua;
               strcpy(diamax,dia);
           }if(agua<min){
               min=agua;
                strcpy(diamen,dia);
           }

       }
    acumagua=acumagua+agua;
    }
    promedio=(float)acumagua/i;
    printf("El dia de mayor caida de agua es:%s\n",diamax);
    printf("El dia de menor caida de agua es:%s\n",diamen);
    printf("El promedio de agua caida durante el mes es:\n %.2f",promedio);
    return 0;
}
