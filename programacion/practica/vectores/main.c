#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];
    int i;
    float promedio;
    int acumulador=0;
    int contpares=0;
    int dato;
    int contImpares=0;

    for(i=0;i<5;i++)
    {
        printf("Digite su numero:");
        scanf("%d",&numero[i]);
        while(numero[i]==0)
        {
            printf("Reingrese el numero distinto a 0");
            scanf("%d",&numero[i]);
        }
    }

    for(i=0;i<5;i++)
    {
        printf("\n\nLos vectores son %d\n",numero[i]);
    }
    for(i=0;i<5;i++)
    {
        acumulador=acumulador+numero[i];
    }
    for(i=0;i<5;i++)
    {
        if(numero[i]%2==0)
        {
            printf("\n El numero  %d es par",numero[i]);
            numero[i];
            contpares++;
        }
        else
        {
            contImpares++;
            printf("\nEl numero %d es impar",numero[i]);
        }
    }

    promedio=(float)acumulador/5;
    printf("\nEl promedio es %.2f",promedio);
    printf("\nLa cantidad de numeros pares es  %d",contpares);
    printf("\nLa cantidad de numeros impares es %d",contImpares);


}
