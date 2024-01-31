#include <stdlib.h>
#include <stdio.h>

 int main(){

// a= area, b= base, h= altura, p=perimetro
int a,b,h,p;

printf("DIGITE A BASE DO RETANGULO:\n ");
scanf("%d", &b);

printf("DIGITE A ALTURA DO RETANGULO:\n ");
scanf("%d", &h);

a = b*h;  /* area é igual a  base vezes altura*/
p = 2*(b+h);  /* perimetro é igual a 2 vezes base mais altura*/


printf("A AREA DO RETANGULO EH DE: %d\n", a);
printf("O PERIMETRO DO RETANGULO EH DE: %d\n", p);




    return 0;
}