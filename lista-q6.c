#include <stdlib.h>
#include <stdio.h>

int main (){

int n1, n2, q, r;

printf("DIGITE DOIS NUMEROS INTEIROS:\n");
scanf("%d", &n1);
scanf("%d", &n2);

q= n1/n2;
r= n1%n2;

printf("O QUOCIENTE DA DIVISAO ENTRE %d E %d EH: %d\n", n1, n2, q); 

printf("O RESTO DA DIVISAO ENTRE %d E %d EH: %d", n1, n2, r); 

getchar();
    return 0;
}