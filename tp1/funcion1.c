#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"


float  pedir1(float num1)
{
    printf("ingrese el numero: ");
    scanf("%f",&num1);
    return num1;

};
float pedir2(float num2)
{
    printf("ingrese el otro numero: ");
    scanf("%f",&num2);
    return (num2);
};
float sumar(float num1,float num2)
{
    float suma;
    suma = num1 + num2;
    return (suma);
};
float restar(float num1,float num2)
{
    float resta;
    resta = num1 - num2;
    return (resta);
}
float dividir(float num1,float num2)
{
    float division;
    division = num1 / num2;
    return (division);
}
float multiplicar(float num1,float num2)
{
    float multiplicacion;
    multiplicacion = num1 * num2;
    return (multiplicacion);
}
float factorial (float num1)
{
    float i;
    float factorial = 1;

    for(i=num1; i>0; i--)
    {
        factorial = factorial*i;
    }

    return (factorial);
}
float validar(float num1)
{
    while(num1 == 0)
    {
        printf("Por favor, ingrese un numero distinto a 0: ");
        scanf("%f",&num1);

    }
    return (num1);


}
float validar2(float num2)
{
    while(num2 == 0)
    {
        printf("Por favor, ingrese un numero distinto a 0 :");
        scanf("%f",&num2);
    }
    return (num2);
}







