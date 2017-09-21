#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"



int obtenerEspacioLibre(EPersona lista[],int tam)
{
    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=i;
            break;
        }
    }
    return flag;
}

int buscarPorDni(EPersona lista[],int dni,int tam)
{
    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1 && lista[i].dni==dni)
        {
            flag=i;
            break;
        }
    }
    return flag;
}

void variablesCero(EPersona lista[],int i)
{
    strcpy(lista[i].nombre,"\0");
    lista[i].estado=0;
    lista[i].dni=0;
    lista[i].edad=0;
}

void inicializarVariables(EPersona lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        variablesCero(lista,i);
    }
}

void mostrarEntrada(EPersona lista)
{
    printf("\n%d     %s     %d",lista.dni,lista.nombre,lista.edad);
}

void mostrarEntradas(EPersona lista[],int tam)
{
    int i;
    int flag=0;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarEntrada(lista[i]);
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("\nNo hay datos cargados en el sistema\n");
    }
}

void alta(EPersona lista[],int tam)
{
    EPersona nuevoProgramador;

    int esta;
    int lugar;
    long int dni;

    lugar=obtenerEspacioLibre(lista,tam);

    if(lugar==-1)
    {
        printf("No hay lugar!\n");
        getch();
    }
    else
    {
        printf("\ningrese DNI: ");
        scanf("%li",&dni);
        if (dni<1000000 || dni>110000000)
        {
            printf("DNI incorrecto");
            getch();
        }
        else
        {
            esta=buscarPorDni(lista,dni,tam);

            if(esta!=-1)
            {
                printf("El DNI ya existe");
                getch();
            }
            else
            {
                nuevoProgramador.dni=dni;
                printf("\nIngrese nombre: ");
                fflush(stdin);
                gets(nuevoProgramador.nombre);
                printf("\nIngrese edad: ");
                scanf("%d",&nuevoProgramador.edad);
                nuevoProgramador.estado=1;
                lista[lugar]=nuevoProgramador;
            }
        }

    }
}

void baja(EPersona lista[],int tam)
{
    int esta;
    int dni;
    char respuesta='n';

    printf("\ningrese DNI: ");
    scanf("%d",&dni);
    esta=buscarPorDni(lista,dni,tam);

    if(esta!=-1)
    {
        mostrarEntrada(lista[esta]);
        printf("\nDesea eliminar esta entrada: S/N");
        fflush(stdin);
        respuesta=getch();
        if(respuesta=='s')
        {
            variablesCero(lista,esta);
            printf("\nEliminado con exito\n");
            getch();
        }
        if(respuesta=='n')
        {
            printf("accion cancelada.\n");
            getch();
        }
    }
    else
    {
        printf("\nNo se ha encontrado el ID.");
        getch();
    }
}

void ordenamiendo(EPersona lista[],int tam)
{
    int i,j;
    EPersona aux;

    for(i=0; i<tam-1; i++)
    {
        for(j=1; j<tam; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
}

void graficoEdades(EPersona lista[],int tam)
{
    int i,contMenores=0,contHastaTC=0,contMasTC=0,max;
    for(i=0;i<tam;i++)
    {
        if(lista[i].estado != 0 && lista[i].edad < 18)
        {
            contMenores++;
        }
        if(lista[i].estado != 0 && lista[i].edad >= 18 && lista[i].edad <= 35)
        {
            contHastaTC++;
        }
        if(lista[i].estado != 0 && lista[i].edad >35)
        {
            contMasTC++;
        }
    }

    if(contMenores > contHastaTC && contMenores > contMasTC)
    {
        max = contMenores;
    }
    else if(contHastaTC > contMasTC)
        max = contHastaTC;
    else
        max = contMasTC;

    for(i=max;i>0;i--)
    {
       if(i <= contMenores)
       {
           printf("  *");
       }

       if(i <= contHastaTC)
       {
           printf("\t  *");
       }
       else
       {
           printf("\t");
       }

       if(i <= contMasTC)
       {
           printf("\t *");
       }

       printf("\n");
    }
    printf(" <18 \t18-35\t>35\n");
    getch();
}
