#include <stdlib.h>
#include <stdio.h>

int main(){


int l1, l2, l3, p;

printf("DIGITE O VALOR DOS 3 LADOS DO TRIANGULO:\n");
scanf("\n%d", &l1); // \n serve para pular a linha
scanf("\n%d", &l2);
scanf("\n%d", &l3);

p=l1+l2+l3;

printf("O PERIMETRO DO TRIANGULO EH DE: %d", p);

getchar();


    return 0;

}