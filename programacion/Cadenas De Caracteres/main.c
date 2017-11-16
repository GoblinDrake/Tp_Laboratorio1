#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char buffer[2000];
    char nombre[50];
    char apellido[20] = "scarafilo";
    int len;
    int i;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>19)
    {
        printf("Reingrese nombre: ");
        fflush(stdin);
        gets(buffer);
    }


    strcpy(nombre,buffer);

    strlwr(nombre);
/*len = strlen(nombre);
    for(i=0; i<len; i++)
    {
        if(nombre[i]=='g')
        {
             nombre[i] = toupper(nombre[i]);
        }
    }*/

    strcat(nombre,apellido);







    printf("El nombre es: %s", nombre);




    /*
    strcpy(cadena2, cadena);

    strcpy(cadena,"pep");

    len = strlen(cadena2);

    printf("El largo es: %d", len);

    if(strcmpi(cadena, cadena2)==0)
    {
        printf("Las cadenas son iguales!!!");
    }*/


    //printf("La cadena ingresada es: %s", cadena2);







    return 0;
}
