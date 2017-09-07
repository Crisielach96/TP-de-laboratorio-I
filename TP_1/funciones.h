#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Ingresa un numero
 *
 * \param el mensaje que se va a mostrar
 * \return retorna el numero ingresado
 *
 */

int agregarNumero(char mensaje[]);



/** \brief Suma dos numeros enteros
 *
 * \param Primer entero
 * \param Segundo entero
 * \return retorna el resultado de la suma
 *
 */

int sumar(int a,int b);



/** \brief Resta dos numeros enteros
 *
 * \param Primer entero
 * \param Segundo entero
 * \return retorna el resultado de la resta
 *
 */

int restar(int a, int b);



/** \brief Multiplica dos numeros enteros
 *
 * \param Multiplicando
 * \param Multiplicador
 * \return retorna el resultado de la multiplicacion
 *
 */

int mult(int a, int b);




/** \brief Divide dos numeros
 *
 * \param Dividendo
 * \param Divisor
 * \return retorna el resultado de la division
 *
 */

float division(int a, int b);




/** \brief Calcula el factorial de un numero
 *
 * \param Numero a calcular
 * \return retorna el factorial del numero
 *
 */

int factorial(int a);

#endif // FUNCIONES_H_INCLUDED
