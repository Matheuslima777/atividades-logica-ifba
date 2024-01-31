#include <stdlib.h>
#include <stdio.h>

int main (){
int n, bin, i, b1,b2,b3,b4,b5;

printf("Digite um numero inteiro menor que 32: ");
scanf("%d", &n);

i = n;
b1= i%2;
i = n/2;
b2= i%2;
i= i/2;
b3= i%2;
i= i/2;
b4= i%2;
i=i/2;
b5= i%2;

printf("%d%d%d%d%d",b5,b4,b3,b2,b1);


    return 0;
}