#include <stdio.h>
#include <stdlib.h>
#include "funcionmenu.h"
#define CANT 3
int main()
{
    int lugarlibre;
    int buscarlegajo;
    eEmpleado personas[CANT];
    inicializarempleado(personas,CANT);
  int salir=0;
    do{
      switch(menu()){
        case 1:

         lugarlibre= buscarlibre(personas,CANT);
           if(lugarlibre == -1)
        {
            printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
            break;
        }
        buscarlegajo=buscaempleado(personas,CANT,CANT);
         alta(personas,CANT);
         system("pause");

            break;
        case 2:
            printf("Imgrese el nombre del empleado que desea dar de baja\n");
                system("pause");
                break;
        case 3:
            printf("modificacion");
            system("pause");
            break;
        case 4:
           listar(personas,CANT);
             system("pause");
            break;
        case 5:
            printf("Ordenar\n");
             system("pause");
            break;
        case 6:
            salir=1;
            break;
        default:
            printf("Opcion incorrecta");
            break;

        }


    }while(salir!=1);
    return 0;
}
