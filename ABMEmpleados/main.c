#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 2

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;

} eEmpleado;
typedef struct
{
    int id;
    char descripcion[51];
    int isEmpty;

}eSector;


int menu();
void inicializarEmpleados(eEmpleado[], int);
void mostrarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado);
int buscarLibre(eEmpleado[], int);
int buscarEmpleado(eEmpleado[], int, int);
void bajaEmpleado(eEmpleado[], int);
void hardCode(eSector[]);

int main()
{
    int salir = 0;
    eEmpleado gente[TAM];
    eSector sectores[5];

    inicializarEmpleados(gente, TAM);
    int i;

    hardCode(sectores);
     for(i=0;i<5;i++){
        printf("%d\t %s\t %d \n",sectores[i].id,sectores[i].descripcion,sectores[i].isEmpty);

     }
     system("pause");
    do
    {
        switch(menu())
        {

        case 1:
            altaEmpleado(gente, TAM);
            system("pause");
            break;
        case 2:
            bajaEmpleado(gente, TAM);
            system("pause");
            break;
        case 3:
            printf("\nModificacion\n\n");
            system("pause");
            break;
        case 4:
            mostrarEmpleados(gente, TAM);
            system("pause");
            break;
        case 5:
            printf("\nOrdenar\n\n");
            system("pause");
            break;
        case 6:
            printf("\nSalir\n\n");
            salir = 1;
            break;
        default:
            printf("\nOpcion Incorrecta\n\n");
            system("pause");
        }
    }
    while(salir != 1);

    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("---ABM Empleados---\n\n");
    printf("1-Alta\n");
    printf("2-Baja\n");
    printf("3-Modificar\n");
    printf("4-Listar\n");
    printf("5-Ordenar\n");
    printf("6-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

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

void mostrarEmpleado(eEmpleado emp)
{
    printf("  %4d     %s     %c  %10.2f    %02d/%02d/%4d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio );
}

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


void hardCode(eSector sectores[]){
    eSector nuevoSector;

    nuevoSector.id = 1;
    strcpy(nuevoSector.descripcion, "RRHH");
    nuevoSector.isEmpty = 0;
    sectores[0] = nuevoSector;


    nuevoSector.id = 2;
    strcpy(nuevoSector.descripcion, "Sistemas");
    nuevoSector.isEmpty = 0;
    sectores[1] = nuevoSector;

    sectores[2].id = 3;
    strcpy(sectores[2].descripcion, "Administracion");
    sectores[2].isEmpty = 0;

    sectores[3].id = 4;
    strcpy(sectores[3].descripcion, "Compras");
    sectores[3].isEmpty = 0;

    sectores[4].id = 5;
    strcpy(sectores[4].descripcion, "Deposito");
    sectores[4].isEmpty = 0;

    /*
    sectores[0].id = 1;
    strcpy(sectores[0].descripcion, "RRHH");
    sectores[0].isEmpty = 0;

    sectores[1].id = 2;
    strcpy(sectores[1].descripcion, "Sistemas");
    sectores[1].isEmpty = 0;

    sectores[2].id = 3;
    strcpy(sectores[2].descripcion, "Administracion");
    sectores[2].isEmpty = 0;

    sectores[3].id = 4;
    strcpy(sectores[3].descripcion, "Compras");
    sectores[3].isEmpty = 0;

    sectores[4].id = 5;
    strcpy(sectores[4].descripcion, "Deposito");
    sectores[4].isEmpty = 0;
    */
}
