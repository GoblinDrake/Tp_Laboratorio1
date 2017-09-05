#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{

    char seguir='s';
     int opcion=0;
     float num1;
     float num2;
     float rsuma;
     float rresta;
     float rdivision;
     float rmultiplicacion;
     float facto;
     float valid1;
     float valid2;

     printf("ingrese el primer numero: ");
     scanf("%f",&num1);
     valid1 = validar(num1);
     printf("ingrese el segundo numero: ");
     scanf("%f",&num2);
     valid2 = validar2(num2);

    do
    {
        printf("\n1- Ingresar 1er operando (%.0f=x)\n",valid1);
        printf("2- Ingresar 2do operando (%.0f=y)\n",valid2);
        printf("3- Calcular la suma (%.0f+%.0f)\n",valid1,valid2);
        printf("4- Calcular la resta (%.0f-%.0f)\n",valid1,valid2);
        printf("5- Calcular la division (%.0f/%.0f)\n",valid1,valid2);
        printf("6- Calcular la multiplicacion (%.0f*%.0f)\n",valid1,valid2);
        printf("7- Calcular el factorial (%.0f!)\n",valid1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            valid1= pedir1(num1);
            valid1 = validar(num1);
            printf("\nprimer operando :%.2f,",valid1);

            break;
        case 2:
            valid2= pedir2(num2);
            valid2 = validar2(num2);

            printf("\nsegundo operando :%.2f\n",valid2);
            break;
        case 3:
            rsuma = sumar(valid1,valid2);
            printf("\nla suma es : %.2f\n",rsuma);
            break;
        case 4:
             rresta = restar(valid1,valid2);
            printf("\nla resta es : %.2f\n",rresta);
            break;
        case 5:
             rdivision = dividir(valid1,valid2);
            printf("\nla division es : %.2f\n",rdivision);
            break;
        case 6:
             rmultiplicacion = multiplicar(valid1,valid2);
            printf("\nla multiplicion es : %.2f\n",rmultiplicacion);
            break;
        case 7:
             facto = factorial(valid1);
            printf("\nel factorial es : %.f\n",facto);
            break;
        case 8:
            rsuma = sumar(num1,num2);
            printf("\nla suma es : %.2f\n",rsuma);
            rresta = restar(num1,num2);
            printf("\nla resta es : %.2f\n",rresta);
            rdivision = dividir(num1,num2);
            printf("\nla division es : %.2f\n",rdivision);
             rmultiplicacion = multiplicar(num1,num2);
            printf("\nla multiplicion es : %.2f\n",rmultiplicacion);
             facto = factorial(num1);
            printf("\nel factorial es es : %.2f\n",facto);


            break;
        case 9:
            seguir = 'n';
            break;
        }



    }while(seguir=='s');
    return 0;
}
