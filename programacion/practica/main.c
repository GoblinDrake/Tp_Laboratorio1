#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main()
{
   int edad;
   float altura;
   char letra;



      printf("ingrese Su edad: ");
      scanf("%d",&edad);
      printf("ingrese su altura: ");
      scanf("%f",&altura);
      printf("ingrese primera letra del nombre: ");
      letra = getche();

      printf("\nEdad: %d\n",edad);
      printf("Altura: %.2f\n",altura);
      printf("Letra de nombre: %c\n",letra);

        if(edad < 18)
        {
            printf("Sos menor\n");

        }
        else{
            printf("sos mayor\n");
        };
        while(altura <= 1.80){

            printf("Ponga una altura descente :");
            scanf("%f",&altura);
        };
        printf("usted es alto/a, puede acceder");



 }
