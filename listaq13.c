#include <stdlib.h>
#include <stdio.h>

int main (){
float r1,r2,r3,rep,req; //rep = resistencia em paralelo

printf("Digite o valor em ohns da resistencia 1: \n");
scanf("%f", &r1);

printf("Digite o valor em ohns da resistencia 2:\n ");
scanf("%f", &r2);

printf("Digite o valor em ohns da resistencia 3:\n");
scanf("%f", &r3);

rep= (r1*r2)/(r1+r2);
req= rep+r3;

printf("RESISTENCIA EQUIVALENTE: %.1f", req);

    return 0;
}