#include <stdio.h>
#include <stdlib.h>
#include "funcionmenu.h"

/** \brief Muestra un menu
 *
 * \param
 * \param
 * \return no devuelve nada
 *
 */

int menu(){
  int elegir;
  system("cls");
        printf("******ABM MENU*******\n");
        printf("1- ALTA\n");
        printf("2- BAJA\n");
        printf("3- Modificacion\n");
        printf("4- LISTAR\n");
        printf("5- ORDENAR\n");
        printf("6- SALIR\n");

        printf("Elegir la opcion: \n");
        scanf("%d",&elegir);

  return elegir;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

void inicializarempleado(eEmpleado vec[],int tam){
  int i;


  for(i=0;i<tam;i++){
    vec[i].isEmpty=1;
  }

}






/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int buscarlibre(eEmpleado vec[],int tam){
  int indice=-1;
  int i;
  for(i=0;i<tam;i++){
    if(vec[i].isEmpty ==1){
        indice=1;
        break;
    }
  }
  return indice;
}
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
 int buscaempleado(eEmpleado vec[],int tam,int legajo){
  int i;
  for(i=0;i<tam;i++){
    if(legajo==vec[i].legajo){
        printf("El legajo ya existe.");
        break;
    }
  }
  return i;
 }
 /** \brief
  *
  * \param
  * \param
  * \return
  *
  */
  void alta(eEmpleado vec[], int cant){
    int i;

    for(i=0; i<cant; i++){
        if(vec[i].isEmpty == 1){
            printf("Legajo: ");
            scanf("%d", &vec[i].legajo);

            printf("Nombre: ");
            fflush(stdin);
            scanf("%s", vec[i].nombre);

            printf("Salario: ");
            scanf("%f", &vec[i].sueldo);

            printf("Dia: ");
            scanf("%d", &vec[i].fechaingreso.mes);

            printf("Mes: ");
            scanf("%d", &vec[i].fechaingreso.mes);

            printf("Anio: ");
            scanf("%d", &vec[i].fechaingreso.anio);

            vec[i].isEmpty = 1;

            break;
        }
    }
}



