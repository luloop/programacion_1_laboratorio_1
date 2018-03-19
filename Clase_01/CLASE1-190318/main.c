#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // biblioteca de getche y getch
#include <ctype.h> //biblioteca de funciones

// biblioteca- archivo donde encuentro funciones



int main() // PUNTO DE ENTRADA
{
//VARIABLES
// int (%d)  numero enteros
// float (%f) numeros flotantes
// char (%c) caracteres

int numero1;
float numero2;
float suma;
char letra;
 /*
   numero1 = 6;
   numero2 = 55.25;
*/

        // ingreso de datos  como prompt y getElementbyid
        // NO SE ASIGNA A LA VARIABLE
        // 2 VARIABLE (  " MASCADA DE ENTRADA DEL TIPO DE DATO  hasta donde puede leer", desde, una direccion de memoria &y la variable )

printf( "ingrese el primer numero \n");
scanf("%d" , &numero1 ) ;

printf( "ingrese el segundo numero \n");
scanf("%f" , &numero2 ) ;

printf( "ingrese una letra \n");
fflush(stdin); //LIMPIA EL BUFFER
/*
scanf ( "%c" , &letra); // el espacio me lo ocupa el enter , SOLUCIONES - un espacio antes de porcentual " %c" - funcion que se encarge de vacias el bUFfer
*/
letra = getchar(); // funcion especializada para leer caracteres getche ( previsualiza el caracter) getch (no repite el caracter ingresdo)  getchar pide un enter pero no limpia el buffer
//letra = toupper(letra); // pasa a mayuscula
letra = tolower(letra);
// ANIDADAS letra = tolower ( getche ());
suma = numero1 + numero2;


printf( " \n \t el numero es: %d y el 2do numero es %.2f \n",numero1, numero2 );
printf( " \t la suma de los numeros es %.2f \n",suma );
printf( " \t la letra ingresada es %c \n" , letra);


//COMANDOS ( LA BARRA SIGNIFICA QUE LO QUE VIENE NO ES TEXTO) \a bip del mother \t tabular


   // printf IMPRIME EN PANTALLA PARA MOSTRAR INFORMACION POR CONSOLA

   // mascara de entrada  %d para numeros enteros %f -  para numero flotantes %c para caracteres

   // %.2f  se pone el .2 para la cantidad de decimales en un numero flotante

    return 0;
}
