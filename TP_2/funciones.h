#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona[],int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona[],int,int);

/** \brief Cambia los valores de las variables por 0.
 *
 * \param lista el array se pasa como parametro.
 * \param posicion del dato.
 * \return void
 *
 */
void variablesCero(EPersona[],int);

/** \brief Inicializa el array a 0.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void inicializarVariables(EPersona[],int);

/** \brief Muestar la primer entrada del array.
 *
 * \param lista el array se pasa como parametro.
 * \return void.
 *
 */
void mostrarEntrada(EPersona);

/** \brief Muestra todas las entradas con un estado de 1.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void mostrarEntradas(EPersona[],int);

/** \brief Ingresa una entrada al array.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void alta(EPersona[],int);

/** \brief Elimina una entrada del array.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void baja(EPersona[],int);

/** \brief Ordena por nombre.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void ordenamiendo(EPersona[],int);

/** \brief Muestra un grafico segun las edades.
 *
 * \param lista el array se pasa como parametro.
 * \param cantidad de personas ingresadas.
 * \return void.
 *
 */
void graficoEdades(EPersona[],int);

#endif // FUNCIONES_H_INCLUDED
