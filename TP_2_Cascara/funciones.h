#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    char edad[50];//No lo declaro como int para poder guardar el ingreso de caracteres y validar el ingreso de solo numeros
    int estado;
    int dni;

}ePersona;
/** \brief Recorre el array colocando cero estado
 *
 * \param Array
 * \param Tamaño del array
 */

void inicializarLibre(ePersona vec[] , int tam);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[],int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona vec[],int tam, int dni);
/** \brief Pide los datos a ser cargados
 *
 * \param Vector donde guardo los datos
 * \param Tamaño del vactor
 * \return
 *
 */

void agregarPersona(ePersona vec[], int tam);
void mostrarDato(ePersona vec);
void mostrarPersonas(ePersona vec[] , int tam);
void borrarPersona(ePersona vec[], int tam);
int verificaNumero(ePersona vec);
int verificaPalabra(ePersona vec);

#endif // FUNCIONES_H_INCLUDED
