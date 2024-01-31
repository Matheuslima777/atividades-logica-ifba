#include <stdlib.h>
#include <stdio.h>

int main (){
float prova1, prova2, prova3, prova4, mediab1, mediab2, mediaS;

printf("Digite a nota da primeira prova do 1 bimestre: ");
scanf("%f", &prova1);

printf("Digite a nota da segunda prova do 1 bimestre: ");
scanf("%f", &prova2);

mediab1 = (prova1+prova2)/2;

printf("Digite a nota da primeira prova do 2 bimestre: ");
scanf("%f", &prova3);

printf("Digite a nota da segunda prova do 2 bimestre: ");
scanf("%f", &prova4);

mediab2= (prova3+prova4)/2;
mediaS= (mediab1+mediab2)/2;

printf("A MEDIA SEMESTRAL EH DE: %.2f", mediaS);


    return 0;
}