#include <stdlib.h>
#include <stdio.h>

int main (){

float raio, altura, volume;


printf("INFORME A ALTURA DO CILINDRO:\n");
scanf("%f", &altura);

printf("INFORME O TAMANHO DO RAIO DO CILINDRO:\n");
scanf("%f", &raio);

volume = ((raio*raio)*3.1)*altura;



printf("O VOLUME DO CILINDO EH DE: %f ", volume);

system("cls");

    return 0;
}