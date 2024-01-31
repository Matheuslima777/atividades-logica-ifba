#include <stdlib.h>
#include <stdio.h>

int main (){

int idade_D, meses, dias, anos;

printf("INFORME A SUA IDADE EM DIAS:\n");
scanf("%d", &idade_D);

anos = idade_D/365;
meses= (idade_D/30) anos;

printf("Tem %d anos e %d meses: ", anos, meses);

    return 0;
}