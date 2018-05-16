#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cad[]={"hola"};
    mostrarCadena(cad);//le paso la direccion de memoria de cad
    return 0;
    }
void mostrarCadena(char* punteroCadena)//recibe la direccion de memoria
{
    while(*punteroCadena != '\0')//puntero cadena tiene el dato de cad
    {
    printf("%c",*punteroCadena);
    punteroCadena++;//le suma uno ala direccion de memoria, en la primera muestra h despues o y asi,le suma 1 multiplicado por la cantidad de bits
    }

}

