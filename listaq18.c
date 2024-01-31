#include <stdio.h>
#include <stdlib.h>

int main(){
int a, x, b, resultado, ax;

printf("Digite o valor de a:\n ");
scanf("%d", &a);


printf("Digite o valor de b:\n ");
scanf("%d", &b);

printf("Digite o valor do resultado:\n ");
scanf("%d", &resultado);

ax =resultado -b;
x= ax/a;

printf("O valor de x eh: %d", x);

    return 0;
}