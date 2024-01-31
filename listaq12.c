#include <stdlib.h>
#include <stdio.h>

int main (){
float kmh,ms;

printf("Digite a velocidade em metros por segundo: \n");
scanf("%f", &ms);

kmh= ms*3.6;

printf("A VELOCIDADE %.1f METROS POR SEGUNDO EM QUILOMETROS POR HORA EH: %.1f: ", ms, kmh);



    return 0;
}