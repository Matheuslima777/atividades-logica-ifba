#include <stdio.h>
#include <stdlib.h>

int main(){
int valor,q1,q2,q3,q4,q5,q6,q7;
int r1,r2,r3,r4,r5,r6;

printf("Digite o valor a ser sacado: \n");
scanf("%d", &valor);

q1= valor/100;
r1=valor%100;
q2= r1/50;
r2= r1%50;
q3=r2/20;
r3= r2%20;
q4= r3/10;
r4= r3%10;
q5=r4/5;
r5=r4%5;
q6=r5/2;
r6= r5%2;
q7=r6/1;


printf("Notas de 100: %d\n", q1);
printf("Notas de 50: %d\n", q2);
printf("Notas de 20: %d\n", q3);
printf("Notas de 10: %d\n", q4);
printf("Notas de 5: %d\n", q5);
printf("Notas de 2: %d\n", q6);
printf("Notas de 1: %d\n", q7);


    return 0;
}