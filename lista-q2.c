#include <stdlib.h>
#include <stdio.h>

 int main(){

// a= area, l= lado,, p=perimetro
int a,l,p;

printf("DIGITE UM LADO DO QUADRADO:\n ");
scanf("%d", &l);

a = l*l;  /* area é igual a  base vezes altura*/    
p = 4*l; /* perimetro é igual a 2 vezes base mais altura*/


printf("A AREA DO RETANGULO EH DE: %d\n", a);
printf("O PERIMETRO DO RETANGULO EH DE: %d\n", p);




    return 0;
}