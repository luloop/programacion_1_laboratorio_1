#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // biblioteca de getche y getch
#include <ctype.h> //biblioteca de funciones
#include <conio.h>

int main()
{

//////////////////EJ 1
    //printf( " \n Esto funciona de maravilla \n");

/////////////////// ej 2
/*
        float numero;
        printf("Ingrese un numero \n");
        scanf( "%f" , &numero);
        printf ( " \a \t Su numero es %.3f \n \n ", numero);
*/

////////////// ej 3
/*
 int numero;
 printf(" \n ingrese un numero \t " );
 scanf ( "%d", &numero );

 printf(" \t su numero es \t %d", numero);
*/

////////////// EJ 4
/*
char dato;
printf(" Ingrese su dato \t");
fflush(stdin);
dato= getchar();
dato = toupper(dato);

printf("\n Su dato es %c \t \n", dato);

*/

// //////////////ej 5

/*
 char nombre;
 int edad;

 printf(" Ingrese su edad \t");
 scanf ( "%d" , &edad);

 printf( "\n Ingrese su inicial \t");
 fflush(stdin);
 nombre = toupper (getchar());

 printf("\n\n Usted se llama %c y su edad es %d \n",nombre, edad);

*/

///////////////////EJ 6

/*
int num1;
int num2;
int suma;
printf("Ingrese el primer numero \n \t");
scanf( "%d", &num1);

printf("Ingrese el segundo numero \n \t");
scanf("%d" , & num2);

suma = num1+num2;

printf("La suma es %d ", suma);

*/


//////////////////ej 7
/*
float num1;
float num2;
int suma;
int resta;
int multi;
float div;

printf(" Ingrese el 1er numero \t");
scanf("%f" , &num1);

printf("\n Ingrese el 2do numero \t");
scanf(" %f", &num2);

suma = num1 + num2;
resta = num1 - num2;
multi = num1*num2;

if(num2==0)
    {
    div = 0;
    }
else
    {
    div = num1/num2;
    }

    printf("\n Su primer numero es %.2f \n, su segundo numero es %.2f \n, su suma es %d \n, su resta es %d \n, su multiplicacion es %d \n y su division es %.2f", num1,num2,suma, resta, multi, div);

*/

////////////// EJERCICIO 8
/*
int dividendo;
int divisor;
int resultado;

printf( "ingrese el dividendo \t ");
scanf("%d", &dividendo);

printf(" ingrese el dividor \t");
scanf( "%d", &divisor);

resultado = dividendo%divisor;

printf("\n El resto de la division es %d", resultado);

*/

/////// EJERCICIO 9
/*
 float importe;
 float aumento;

 printf(" ingrese su importe \t ");
 scanf("%f", &importe);

 aumento = importe*1.1;

 printf("El importe con el aumento es \t %.2f ", aumento);

*/

////// EJERCICIO 10

float importe;
float descuento;

printf( "Ingrese su importe \t");
scanf("%f", &importe);

descuento = importe*.75;

printf(" Su importe con el descuento es %.2f \t", descuento);


    return 0;
}
