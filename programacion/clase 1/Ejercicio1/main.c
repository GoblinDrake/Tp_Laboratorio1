#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    int entero;
    float flotante;
    char caracter;

    printf("Ingrese un entero: ");
    scanf("%d", &entero);
    printf("Ingrese un caracter: ");


    caracter = tolower(getche());
    while(caracter!='a' && caracter !='b')
    {
         printf("Reingrese un caracter: ");

    caracter = getche();
    }


    printf("\nIngrese un flotante: ");
    scanf("%f", &flotante);
   // printf("Entero: %d -- flotante: %.2f -- Caracter: %c",  entero, flotante, caracter);

    printf("%d es el valor entero\n", entero+45);
   printf("%.2f es el valor flotante\n", flotante);
   printf("%c es el valor caracter", caracter);



    return 0;
}
