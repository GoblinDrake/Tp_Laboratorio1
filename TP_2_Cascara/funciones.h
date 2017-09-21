#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado = 0;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);
void iniciarPersona(EPersona lista[], int);

/** \brief Carga los datos de una persona
 *
 * \param Ingresa los datos
 *
 */
void cargarPersona(EPersona unaPersona[]);

/** \brief Da de baja a una persona mediante su DNI
 *
 * \param Busca el DNI de la persona a la que se desea dar de baja
 * \return Se devuelve el Dni de la persona a eliminar y se espera confirmacion
 */
int borrarPersona(EPersona laPersona[]);

/** \brief Enlista a las personas ingresadas
 *
 * \param Lee los datos de las personas acumuladas y crea una lista
 *
 */
void listaPersonas(EPersona[], int);

/** \brief Ordena por nombre la Lista de personas
 *
 * \param Toma la lista de personas hecha anteriormente y las ordena por la primera letra del nombre
 *
 */
void ordenLista(EPersona listaPersonas[]);

/** \brief Hace un grafico de la lista mediante asteriscos, mide a las personas por su edad
 *
 * \param recibe la edad de las personas para ordenarlas y graficarlas
 *
 */
void graficoLista(EPersona listaPersonas[]);

#endif // FUNCIONES_H_INCLUDED
