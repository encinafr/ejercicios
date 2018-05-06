#include <stdio.h>
#include <stdlib.h>
#include "myfuncion.h"
/** \brief Recorre el vector e inicializa el estado en uno
 *
 * \param vec el el vector que le pasamos por parametro
 * \param tam el tamaño del vector
 */

void inicializarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    for(i=0; i< tam; i++)
    {
        vec[i].isEmpty =1;
    }
}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    system("cls");
    printf("---Lista de Empleados---\n\n");
    printf("  Legajo  Nombre   Sexo   Sueldo   Fecha de Ingreso \n\n");
    for(i=0; i< tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarEmpleado(vec[i]);
        }
    }
}
/** \brief Recorre el vector e imprime los datos cargados
 *
 * \param vec Vector a recorrer
 */
/** \brief Recorre el vector y pregunta por el estado para imprimir solo los datos que esten cargados, sin basura
 * \param vec Vector a recorrer
 * \param tam tamaño del vactor
 */

void mostrarEmpleado(eEmpleado emp)
{
    printf("  %4d     %s     %c  %10.2f    %02d/%02d/%4d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio );
}
/** \brief Recorre el array y corrobora que tenga lugar disponible
 *
 * \param lista el array que pasamos por parametro
 * \param tam el tamaño del array
 * \return retorna si hay espacio y -1 si no la hay
 *
 */
int buscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
/** \brief Recorre el vector y compara si el legajo ingresado existe
 *
 * \param vec Vector que se pasa por parametro
 * \param tam tamaño del vactor
 * \param legajo el legajo a ser buscado
 * \return retorna el indice en donde se encuentra el elemento que coincide con el parametro
 *
 */
int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
/** \brief Solicita los datos a ser cargados
 *
 * \param Vector donde guardo los datos
 * \param Tamaño del vactor
 */

void altaEmpleado(eEmpleado vec[], int tam)
{

    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo;

    system("cls");
    printf("---Alta empleado---\n\n");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", legajo);
                   mostrarEmpleado(vec[esta]);
        }
        else{
                   nuevoEmpleado.isEmpty = 0;
                   nuevoEmpleado.legajo = legajo;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevoEmpleado.nombre);

                   printf("Ingrese sexo: ");
                   fflush(stdin);
                   scanf("%c", &nuevoEmpleado.sexo);

                   printf("Ingrese sueldo: ");
                   scanf("%f", &nuevoEmpleado.sueldo);

                   printf("Ingrese fecha de ingreso d m a: ");
                   scanf("%d %d %d", &nuevoEmpleado.fechaIngreso.dia, &nuevoEmpleado.fechaIngreso.mes, &nuevoEmpleado.fechaIngreso.anio);

                   vec[indice] = nuevoEmpleado;

                   printf("\nAlta exitosa!!!\n\n");

           }
  }

}
/** \brief Busca el legajo del usuario y cambia el estado para pisar sus datos
 *
 * \param vec vector que pasamos por parametro
 * \param tam tamaño del vector
 *
 */

void bajaEmpleado(eEmpleado vec[], int tam){
int legajo;
int esta;
char confirma;

system("cls");
printf("---Baja Empleado---\n\n");

   printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}
/** \brief Verifica si el dato ingresado es un numero
 *
 * \param Dato ingresado
 * \return 1 si ingreso una letra;
 *
 */
 void verificaNumero(char vec[]){
  int flag = 0;
  int cant,i;
  cant = strlen(vec);

    for(i=0; i<cant; i++){
        if(!isdigit(vec[i])){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\nERROR, a ingresado una letra");

    }
    if (flag == 0){

    }


 }
 /** \brief  compara los nombres y los ordena en orden alfabetico
 *
 * \param vec vector que pasamos por parametro
 * \param tam tamaño del vactor
 *
 */

 void ordenarPorNombre(ePersona vec[] , int tam)
{
    int i;
    int j;
    ePersona aux;

    //printf("Dni:\tNombre:\tEdad:\n");
    for(i=0 ; i < tam-1 ; i++)
    {
        for(j=i+1 ; j < tam ; j++)
        {
            if((strcmp(vec[i].nombre , vec[j].nombre) > 0))
            {
                aux= vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }


}

/** \brief Busca el legajo del usuario,muestra los datos ser modificados guarda los nuevos datos
 *
 * \param vec vector que pasamos por parametro
 * \param tam tamaño del vector
 *
 */
void modificaEmpleado(eEmpleado vec[], int tam){
    eEmpleado nuevoDatoEmpleado;
    int legajo;
    int esta;
    char confirma;
    int salir = 0;

    system("cls");
    printf("---Modifica Empleado---\n\n");

   printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma modificacion? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            do{
                switch(menuModifica()){
                    case 1:
                        printf("Ingrese el nuevo legajo: ");
                        scanf("%d" , &nuevoDatoEmpleado.legajo);
                        vec[esta].legajo = nuevoDatoEmpleado.legajo;
                        break;
                    case 2:
                        printf("Ingrese el nuevo nombre: ");
                        fflush(stdin);
                        gets(nuevoDatoEmpleado.nombre);
                        strcpy(vec[esta].nombre , nuevoDatoEmpleado.nombre);
                        break;
                    case 3:
                        printf("Ingrese el nuevo sexo: ");
                        fflush(stdin);
                        scanf("%c" , &nuevoDatoEmpleado.sexo);
                        vec[esta].sexo = nuevoDatoEmpleado.sexo;
                        break;
                    case 4:
                        printf("Ingrese el nuevo sueldo: ");
                        scanf("%f" , &nuevoDatoEmpleado.sueldo);
                        vec[esta].sueldo = nuevoDatoEmpleado.sueldo;
                        break;
                    case 5:
                        printf("Ingrese la nueva fecha: ");
                        scanf("%d %d %d", &nuevoDatoEmpleado.fechaIngreso.dia, &nuevoDatoEmpleado.fechaIngreso.mes, &nuevoDatoEmpleado.fechaIngreso.anio);                        break;
                        vec[esta].fechaIngreso = nuevoDatoEmpleado.fechaIngreso;
                    case 7:
                        salir = 1;
                        break;
                }

            }while(salir != 1);
            printf("\nSe ha realizado la modificacion\n\n");
        }
        else{
            printf("\nSe ha cancelado la modificacion\n\n");
        }

        }
}

/** \brief imprime un menu con opciones para moificar
 *
 * \return Retorna la opcion ingresada
 *
 */


int menuModifica()
{
    int opcion;

    system("cls");
    printf("---Modificar Empleados---\n\n");
    printf("1-Legajo\n");
    printf("2-Nombre\n");
    printf("3-Sexo\n");
    printf("4-Sueldo\n");
    printf("5-Fecha de Ingreso\n");
    printf("6-Sector\n");
    printf("7-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
