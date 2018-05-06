/*Se debe desarrollar un sistema (en ANSI C) de venta de productos al estilo
mercadolibre. En este sistema existirán usuarios, los cuales ingresarán utilizando
su nombre de usuario y password. Mediante la plataforma se podrá comprar y
vender productos, estos se encuentran definidos por un nombre y precio. La
porción del sistema que deberá realizarse se centrará en la venta de productos y
consta de un menú con las siguientes opciones:
1. ALTA DE USUARIO:​ Se piden los datos del usuario requeridos para que el
sistema pueda funcionar.
2. MODIFICAR DATOS DEL USUARIO:​ Se ingresa el ID del usuario, permitiendo
modificar sus datos.
3. BAJA DEL USUARIO:​ Se ingresa el ID del usuario y eliminará junto con todos
sus productos a la venta.
4. PUBLICAR PRODUCTO:​ Se ingresará el ID del usuario y se pedirán los datos
del producto a publicar (nombre, precio y stock)
5. MODIFICAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los
productos de dicho usuario mostrando todos sus campos (id, nombre, precio,
cantidad vendida y stock), luego ingresar el ID del producto y se pedirá que se
ingrese un nuevo precio y stock.
6. CANCELAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los
productos de dicho usuario mostrando todos sus campos (id, nombre, precio,
cantidad vendida y stock), luego ingresar el ID del producto que se quiere cancelar
su publicación.
7. COMPRAR PRODUCTO:​ Se ingresará el ID del producto a comprar, y en el
caso que haya stock se realizará la compra, en dicho caso se ingresará una
calificación para el vendedor.
8. LISTAR PUBLICACIONES DE USUARIO: ​Se ingresa el ID del usuario y se
mostrará una lista de productos indicando: id, nombre, precio, cantidad vendida y
stock.
9. LISTAR PUBLICACIONES:​ Se mostrará una lista de productos indicando: id,
nombre, precio, cantidad vendida, stock y nombre del usuario.
10. LISTAR USUARIOS:​ Se mostrará una lista de usuarios con la calificación
promedio de cada uno.
Nota 0​: El sistema soportará una capacidad máxima de 100 usuarios y 1000 productos.
Nota 1:​ Se deberá desarrollar una biblioteca lib.c y lib.h la cual contendrá las funciones (Alta, Baja,
Modificar, etc.).
Nota 2:​ El código deberá tener comentarios con la documentación de cada una de las funciones y
respetar las reglas de estilo de la cátedra.

*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 100
#define UNI 1000

int main()
{
    int flag=0;
    char salir='s';

    int opcion;
    Usuario NewUsuario[TAM];
    Producto NewProducto[UNI];
    inicializarUsuario(NewUsuario,TAM);
    inicializarProducto(NewProducto,UNI);

    while(salir == 's')
    {
        system("cls");
        printf("----MENU PRINCIPAL---\n\n");
        printf("1- ALTA USUARIO\n");
        printf("2- MODIFICAR USUARIO\n");
        printf("3- BAJA USUARIO\n");
        printf("4- PUBLICAR PRODUCTO\n");
        printf("5- MODIFICAR PUBLICACION:\n");
        printf("6- CANCELAR PUBLICACION\n");
        printf("7- COMPRAR PRODUCTO:\n");
        printf("8- LISTAR PUBLICACIONES DE USUARIO:\n");
        printf("9- LISTAR PUBLICACIONES:\n");
        printf("10- LISTAR USUARIOS:\n");
        printf("11 SALIR\n");

        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                agregarPersona(NewUsuario,TAM);
                break;
            case 2:
                modificaUsuario(NewUsuario,TAM);
                break;
            case 3:
                borrarUsuario(NewUsuario,TAM);
                break;
            case 4:
                agregarProducto(NewProducto,UNI);
                contadorproducto(NewProducto,UNI);
                break;
            case 5 :
                modificaProducto(NewProducto,UNI);
            break;
            case 6 :
                borrarProducto(NewProducto,UNI);
            break;
            case 7 :

            break;
            case 8 :

            break;
            case 9 :
                mostrarProductos(NewProducto,UNI);

                system("pause");
            break;
            case 10 :
                    mostrarPersonas(NewUsuario,TAM);
                    system("pause");
            break;
            case 11
             :
                salir='n';
            break;
             default:
                            printf("Opcion incorrecta");
                            system("pause");

        }
    }
    return 0;
}
