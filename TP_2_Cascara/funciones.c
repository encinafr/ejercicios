
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


void inicializarLibre(ePersona vec[] , int tam)
{
    int i;
    for(i=0 ; i < tam ; i++)
    {
        vec[i].estado = 1;
    }
}


int obtenerEspacioLibre(ePersona lista[],int tam){

  int i;
    int espacio = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(lista[i].estado == 1)
        {
            espacio = i;
            break;
        }
    }
    return espacio;
}


void mostrarDato(ePersona vec)
{
    printf("Nombre:\tDni:\tEdad:\n");
    printf("%s\t%d\t%s\n" , vec.nombre ,vec.dni , vec.edad);

}


void mostrarPersonas(ePersona vec[] , int tam)
{
    ordenarPorNombre(vec , tam);
    int i;
    printf("Nombre:\tDni:\tEdad:\n");
    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].estado == 0)
        {

            printf("%s\t%d\t%s\n" , vec[i].nombre ,vec[i].dni , vec[i].edad);
        }
    }
}

int buscarPorDni(ePersona vec[],int tam, int dni)
{
      int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado ==0 && dni==vec[i].dni)
        {
            indice = i;
            break;
        }
    }
    return indice;


}


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

void agregarPersona(ePersona vec[], int tam)
{

    ePersona nuevaPersona;
    int indice;
    int existe;
    int dni;


    system("cls");
    printf("---Agregar persona---\n\n");

    indice = obtenerEspacioLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
        system("pause");
    }
    else
    {
        printf("Ingrese DNI: ");
         fflush(stdin);
        scanf("%d", &dni);
         /*  while(dni<=0 || !isdigit(dni))
                   {
                       printf("ERROR, Reingrese DNI: \n");
                        fflush(stdin);
                        scanf("%d", &dni);
                   }
*/
        existe = buscarPorDni(vec, tam, dni);

        if(existe != -1)
        {
            printf("\nEl DNI %d ya esta dado de alta en el sistema\n", dni);
                   mostrarDato(vec[existe]);
                   system("pause");
        }
       else{
                   nuevaPersona.estado = 0;
                   nuevaPersona.dni = dni;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevaPersona.nombre);
                   while(verificaPalabra(nuevaPersona)==0){
                    printf("ERROR,Reingrese nombre: ");
                    fflush(stdin);
                    gets(nuevaPersona.nombre);
                   }

                   printf("Ingrese edad: ");
                   fflush(stdin);
                   scanf("%s", nuevaPersona.edad);
                   while(nuevaPersona.edad <=0 || verificaNumero(nuevaPersona)==1){
                    printf("ERROr,Reingrese edad: ");
                   fflush(stdin);
                   scanf("%s", nuevaPersona.edad);
                   }
                   vec[indice] = nuevaPersona;

                   printf("\nAlta exitosa!!!\n\n");
                    system("\npause\n");

           }

  }

}


void borrarPersona(ePersona vec[], int tam){
int dni;
int existe;
char confirma;
ePersona nuevapersona;

system("cls");
printf("---Borrar persona---\n\n");

   printf("Ingrese DNI: ");
        scanf("%d", &dni);

        existe = buscarPorDni(vec, tam, dni);

        if(existe == -1)
        {
            printf("\nEl DNI %d no se encuentra en el sistema\n\n", dni);
            system("pause");

        }
        else{

                mostrarDato(vec[existe]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){

            vec[existe]

            .estado = 1;
            printf("\nSe ha realizado la baja\n\n");
            system("pause");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
            system("pause");
        }

        }
}

void mostrarGrafico(ePersona vec[],int tam){

  int i,r;
  int mayor;
  int flag=0;

  printf("\n***GRAFICO DE EDADES***\n");

  for(i=0 ; i < tam ; i++){

      if(vec[i].edad<18 && vec[i].estado==0){
        rango1++;
      }
      if(vec[i].edad >17 && vec[i].edad <= 35 && vec[i].estado==0){
        rango2++;
      }
      if(vec[i].edad >35 && vec[i].estado==0){
        rango3++;
      }
    }

     if(rango1 >= rango2 && rango1 >= rango3){
        mayor = rango1;
    }else{
        if(rango2 >= rango1 && rango2 >= rango3)
        {
            mayor = rango2;
        }
        else{
        mayor = rango3;
        }
    }
  for(i=mayor; i>0; i--){
        if(i<= rango1){
            printf("*");
        }
        if(i<= rango2){
            flag=1;
            printf("\t*");
        }
        if(i<= rango3){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }

    printf("<18\t19-35\t>35\n");

}

 int verificaNumero(ePersona vec){
  int cant,i;
  int flag =0;
  cant = strlen(vec.edad);

    for(i=0; i<cant; i++){
        if(!isdigit(vec.edad[i])){

            flag=1;
            break;
        }
    }
    return flag;

 }

 int verificaPalabra(ePersona vec){
  int cant,i;
  int flag =0;
  cant = strlen(vec.nombre);

    for(i=0; i<cant; i++){
        if(!isdigit(vec.nombre[i])){

            flag=1;
            break;
        }
    }
    return flag;

 }
