#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //biblioteca de getche y getch
#include <ctype.h> //biblioteca de funciones
#include <math.h>

int main()
{ /*
    int lado;
    int perimetro;
    printf("Ingrese la medida del lado del triangulo equilatero\n");
    scanf( "%d", &lado);

perimetro= lado*3;

printf("el perimetro es: %d", perimetro);

*/
/*
int ancho;
int largo;
int alambrado;

printf(" ingrese el ancho del terreno \n");
scanf("%d", &ancho);

printf(" ingrese el largo del terreno \n");
scanf("%d", &largo);

alambrado= ((ancho+largo)*2)*6;

printf("usted necesita %d metros de alambrado", alambrado); */

/*
char mes;
printf("ingrese la inicial del mes \n" );
mes= tolower( getche());
 switch (mes)
 {
 case 'e':
 case 'f':
 printf("\n veranito");
 break;
 default:
 printf("\n extraño el veranito\n\n\n\n\n");
 break;
 }
 */

 int venta;
 int maximo;
 int minimo;
 int flag=0;
 int dia =1;
 int sumatotal=0;


 for (int i=0 ; i<7 ; i++)
 {
 printf(" ingrese el importe del dia %d \n", dia);
 scanf("%d", &venta);
 while (venta <=0 )
 {
     printf(" REingrese el importe del dia %d \n", dia);
    scanf("%d", &venta);
 }
 dia ++;
 sumatotal= sumatotal+ venta;

 if (venta > maximo || flag == 0)
 {
     maximo = venta;

 }
 if(venta < minimo || flag == 0)
 {
     minimo= venta;
     flag=1;
 }
 }

 printf(" el importe total de lo 7 dias es %d \n el maximo es %d \n y el minimo es %d",sumatotal,maximo,minimo);

    return 0;
}
