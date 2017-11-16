#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int legajo[TAM], nota[TAM], auxLegajo;
    char nombre[TAM][20], aux[50];
    char rta;
    int flag=0;
    int auxNota;
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo[i]);
        printf("Ingrese nota: ");
        scanf("%d", &nota[i]);
        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombre[i]);
    }

    printf("Ingrese el legajo a modificar: ");
    scanf("%d", &auxLegajo);
    for(i=0; i<TAM; i++)
    {
        if(legajo[i]==auxLegajo)
        {
            flag=1;
            printf("%d\t\t%d\t\t%s\nIngrese la nueva nota: ", legajo[i], nota[i], nombre[i]);
            scanf("%d", &auxNota);
            printf("Esta seguro de modificar la nota? s/n: ");
            rta = getche();
            if(rta=='s')
            {
                nota[i] = auxNota;
            }
            else
            {
                printf("Accion cancelada por el usuario!!!");
            }

        }

    }
    if(flag==0)
    {
        printf("Legajo inexistente!!!");
    }




    /*printf("Ingrese el nombre para filtrar: ");
    fflush(stdin);
    gets(aux);
    for(i=0; i<TAM; i++)
    {
        if(strcmp(nombre[i],aux)==0)
        {
            printf("%d\t\t%d\t\t%s\n", legajo[i], nota[i], nombre[i]);
        }

    }*/


    for(i=0; i<TAM; i++)
    {

       printf("%d\t\t%d\t\t%s\n", legajo[i], nota[i], nombre[i]);


    }

    return 0;
}
