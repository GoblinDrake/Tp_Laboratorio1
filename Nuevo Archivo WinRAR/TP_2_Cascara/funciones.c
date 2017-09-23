#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"




int iniciarCantidad(char variable[])
{
    int CANTIDAD;
    CANTIDAD = strlen(variable);
    return CANTIDAD;
}

int iniciarLetra(char variable[])
{
    int flag;
    int CANTIDAD;
    int i;

    flag = 0;
    CANTIDAD = strlen(variable);
    for(i=0; i<CANTIDAD; i++)
    {
        if(!isdigit(variable[i]))
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int identificarNumero(char dato[])
{
    int i;
    int flag;
    int CANTIDAD;

    flag = 0;
    CANTIDAD = strlen(dato);
    for(i=0; i<CANTIDAD; i++)
    {
        if(isdigit(dato[i]))
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

void inicializar(EPersona Persona[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        Persona[i].estado=0;
    }
}

int charXint(char variable[])
{
    int i;
    i=A(variable);
    return i;
}

int buscarPorDni(EPersona Persona[], int dni, int tam)
{
    int i;
    int flag;

    for(i=0; i<tam; i++)
    {
        if(Persona[i].dni==dni)
        {
            flag=i;
            break;
        }
        else
        {
            flag=-1;
        }
    }
    return flag;
}


void agregarPersona(EPersona Persona[], int tam)
{
    int i, validoIgualdad,flag, CANTIDAD, validoDNI, validoNom, validoEdad, dniNuevo;
    char dni[9];
    flag =0;
    for(i=0; i<tam; i++)
    {
        if(Persona[i].estado==0)
        {
            do
            {
                system("cls");
                menu();
                printf("\nNombre: ");
                fflush(stdin);
                fgets(Persona[i].nombre, 50, stdin);
                validoNom=esNumero(Persona[i].nombre);
                CANTIDAD=validoCantidad(Persona[i].nombre);
            }
            while(validoNom!=0 || CANTIDAD<=3);
            do
            {
                printf("\nDNI (sin puntos): ");
                fflush(stdin);
                fgets(Persona[i].dniC, 9, stdin);

                CANTIDAD=validoCantidad(Persona[i].dniC);

                validoDNI = esNumero(Persona[i].dniC);

                dniNuevo = A(Persona[i].dniC);
                validoIgualdad = buscarPorDni(Persona, dniNuevo, tam);
                while(validoIgualdad!=-1)
                {
                    printf("DNI repetido.");
                    printf("\nDNI (sin puntos): ");
                    fflush(stdin);
                    fgets(Persona[i].dniC, 9, stdin);

                    CANTIDAD=validoCantidad(Persona[i].dniC);

                    validoDNI = esNumero(Persona[i].dniC);

                    dniNuevo = A(Persona[i].dniC);
                    validoIgualdad = buscarPorDni(Persona, dniNuevo, tam);
                }
                Persona[i].dni=dniNuevo;

            }
            while(CANTIDAD!=8);
            do
            {
                printf("\nEDAD: ");
                fflush(stdin);
                fgets(Persona[i].edad, 3, stdin);

                CANTIDAD=validoCantidad(Persona[i].edad);

                validoEdad = esNumero(Persona[i].edad);

                Persona[i].edadI = A(Persona[i].edad);
            }
            while(Persona[i].edadI<1 || Persona[i].edadI>100 || validoEdad!=1);
            flag = 1;
            Persona[i].estado=1;
            system("cls");
            break;

        }
    }
    if(flag==0)
    {
        printf("\n\nNo hay espacio suficiente");
    }
}

void listarPersona(EPersona Persona[], int tam)
{
    system("cls");
    int i,j;
    EPersona auxiliar;
    printf("EDAD\tDNI\t\tNOMBRE\n");
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(Persona[i].nombre, Persona[j].nombre)>0)
            {
                auxiliar = Persona[i];
                Persona[i] = Persona[j];
                Persona[j] = auxiliar;
            }
        }
    }
    for(i=0; i<tam; i++)
    {
        if(Persona[i].estado!=0)
        {
            printf("%d\t%d\t%s\n", Persona[i].edadI, Persona[i].dni, Persona[i].nombre);
        }
    }
}

void borrarPersona(EPersona Persona[], int tam) //REVISAR
{
    int i;
    int flag;
    int respuesta;
    int CANTIDAD;
    int validoDNI;
    char confirma;
    char rta[9];

    flag=0;
    system("cls");
    listarPersona(Persona, tam);
    menu();
    do
    {
        printf("\nDNI de la persona a borrar: ");
        fflush(stdin);
        fgets(rta, 9, stdin);
        CANTIDAD=validoCantidad(rta);
        validoDNI =validoLetra(rta);
        respuesta = A(rta);
    }
    while(validoDNI==1 || CANTIDAD!=8);
    for(i=0; i<tam; i++)
    {
        if(respuesta == Persona[i].dni && Persona[i].estado!=0)
        {
            do
            {
                printf("Esta seguro que desea borrar a esta persona?s/n");
                confirma = tolower(getche());
            }
            while(confirma!='s' && confirma!='n');
            if(confirma=='s')
            {
                Persona[i].estado=0;
                system("cls");
                listarPersona(Persona, tam);
                printf("Se borro a esta persona.\n");
                flag=1;
            }
            else
            {
                system("cls");
                printf("Accion cancelada¡¡¡¡¡¡¡\n");
                flag=1;
                break;
            }

        }
    }
    if(flag==0)
    {
        printf("inexistente!!!!");
    }

}

