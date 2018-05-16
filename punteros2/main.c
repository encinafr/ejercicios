#include <stdio.h>
#include <stdlib.h>

    struct alumno {
    char nombre[20];
    int edad;
    };
    void main(void)
    {
        struct alumno auxiliarAlumno;
        struct alumno *punteroAlumno;
        punteroAlumno = &auxiliarAlumno;
        printf("Ingrese nombre:\n");
        //gets(punteroAlumno->nombre);
        gets((*punteroAlumno).nombre);


        printf("Ingrese Edad:\n");
        //scanf("%d",&punteroAlumno->edad);
        scanf("%d",&(*punteroAlumno).edad);

        //printf("Su nombre es:%s y su edad %d\n",punteroAlumno->nombre,punteroAlumno->edad);
        printf("Su nombre es:%s y su edad %d\n",(*punteroAlumno).nombre,(*punteroAlumno).edad);




       // strcpy(punteroAlumno->nombre, "Ernesto");
        //punteroAlumno->nota = 10;

        //printf("Su nombre es: %s\n",punteroAlumno->nombre);
        //printf("Edad:%d",punteroAlumno->edad);
    }
