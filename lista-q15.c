#include <stdio.h>
#include <stdlib.h>

int main(){
float sombrap, msombra, altura, altura_Predio;

printf("Digite O tamanho da sombra do predio em metros: \n");
scanf("%f", &sombrap);


printf("Digite O tamanho da sua sombra em centimetros: \n");
scanf("%f", &msombra);


printf("Digite A sua altura: \n");
scanf("%f", &altura);

altura_Predio= (altura*sombrap)/(msombra*1/100);

printf("A altura do predio eh de: %2.f", altura_Predio);

    return 0;
}