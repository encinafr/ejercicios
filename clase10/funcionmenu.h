#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct
{
    int dia;
    int mes;
    int anio;
}eEfecha;
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eEfecha fechaingreso;
    int isEmpty;
}eEmpleado;

int menu();
void inicializarempleado(eEmpleado vec[],int tam);
int buscarlibre(eEmpleado vec[],int tam);
int buscaempleado(eEmpleado vec[],int tam,int legajo);
void alta(eEmpleado vec[],int cant);
void listar(eEmpleado vec[], int cant);
#endif // FUNCIONES_H_INCLUDED
