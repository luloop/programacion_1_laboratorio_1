#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //biblioteca de getche y getch
#include <ctype.h> //biblioteca de funciones
#include <math.h>

/*
8-Realizar el algoritmo que al presionar el botón "Mostrar" permita ingresar números positivos (validar que sea positivo) hasta que el usuario quiera.
Informar al terminar el ingreso por document.write:
a) la cantidad de números pares.
b) el promedio de todos los números ingresados.
c) la suma de todos los números.
d) El número máximo y el mínimo.

*/

int main()
{
   int num;
   char seguir;
   int contPares= 0;
   int contador=0;
   float promedio;
   int sumatotal=0;
   int maximo;
   int minimo;
   int flag=0;


do
{
    printf(" ingrese un numero \n");
    scanf("%d", &num);
//validacion del numero
                while ( num <=0)
                {
                printf(" ingrese un numero positivo \n");
                scanf("%d", &num);
                }
//CONTADOR
    contador ++;
// SUMA DE TODOS LOS NUMEROS
    sumatotal=num+sumatotal;
// contador de pares y suma de pares
        if ( num%2==0)
        {
        contPares++;
        }
// MAXIMO Y MNIMOS
/*
   if (contador == 1)
    {
     maximo= num;
     minimo= num;
     }
*/

   // maximo
     if (num > maximo|| flag ==0)
     {
         maximo = num;

     }
     // minimo
     if (num < minimo || flag ==0)
     {
         minimo = num;
          flag = 1;}

     printf("desea continuar?\t ");
     fflush(stdin);
     seguir = tolower(getchar());
//validacion de las respuesta
     while ( seguir !='s' && seguir !='n' )
     {
     printf("desea continuar?solo ingrese S o N \t ");
     fflush(stdin);
     seguir = tolower(getchar());
     }


} while (seguir=='s');

//PROMEDIO DE TODOS LOS NUMEROS

promedio=  (float)sumatotal/ contador;

printf(" \n A- la cantidad de numeros pares es: %d \n B- el promedio total es %.2f \n C- la suma de todo es %d \n D- el maximo es %d  y el minimo es %d \n \n",contPares,promedio,sumatotal, maximo, minimo);



    return 0;
}
