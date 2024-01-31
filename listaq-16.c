#include <stdio.h>
#include <stdlib.h>

int main(){
int numero, r1, r2,i;

printf("Digite Um numero inteiro de 3 algarismos: \n");
scanf("%d", &numero);

i=numero;
r1= i%10;
i= numero/10;
r2= i%10;
i=i/10;

printf("%d, %d, %d ", r1, r2, i);

    return 0;
}