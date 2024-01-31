#include <stdlib.h>
#include <stdio.h>

 int main(){

// a= area, l= lado, c= perimetro
float a,r,c;
float pi = 3.14;

printf("DIGITE O VALOR DO RAIO DO CIRCULO:\n ");
scanf("%f", &r);

a = pi*(r*r);    
c = 2*pi*r; 


printf("A AREA DO CIRCULO EH: %f\n", a);
printf("A PERIMETRO DO CIRCULO EH: %f\n", c);




    return 0;
}