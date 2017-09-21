#include <stdio.h>
#include <stdlib.h>
#include "funciones h"

void iniciarPersona(EPersona lista[], int)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        lista.estado=0
    }
}
void cargarPersona(EPersona lista[], int)
{
    void iniciarPersona(EPersona lista[], int);
    int i
    for(i=0; i<TAM; i++)
    {
        if(lista[].estado==0)
        {
            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets (lista[i].nombre[]);
            printf("Ingrese edad: ");
            scanf("%d",lista[i].edad);
            printf("Ingrese DNI: ");
            scanf("%d", lista[i].dni);
            lista[i].estado = 1;
            break;

        }

    }

}
void borrarPersona(EPersona lista[], int dni)
{
    int borrarDni;
    char confirm;
    int i;
    printf("Ingrese dni de la persona a eliminar");
    scanf("%d", borrarDni);
    for(i=0; i<TAM; i++)
    {
        if(borrarDni==dni)
        {
            printf("Desea borrar a esta persona?s/n")
            while(s)
        }

        }
        else
        {
            printf("Dni inexistente!!!");
        }


    }



}
