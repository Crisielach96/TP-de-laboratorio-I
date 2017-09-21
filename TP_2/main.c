#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

#define TAM 20

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona lista[TAM];
    inicializarVariables(lista,TAM);

    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        if(opcion<1 || opcion>5)
        {
            printf("Ingrese una opcion valida.\n");
            getch();
        }
        else
        {
            switch(opcion)
            {
            case 1:
                system("cls");
                alta(lista,TAM);
                break;
            case 2:
                system("cls");
                baja(lista,TAM);
                break;
            case 3:
                system("cls");
                ordenamiendo(lista,TAM);
                mostrarEntradas(lista,TAM);
                getch();
                break;
            case 4:
                system("cls");
                graficoEdades(lista,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
            }
        }
    }
    return 0;
}
