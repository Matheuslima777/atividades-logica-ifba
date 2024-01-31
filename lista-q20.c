#include <stdio.h>
#include <stdlib.h>

int main(){
float  valor, entrada;
int parcelas;

printf("Digite o valor do produto: \n");
scanf("%f", &valor);

parcelas= valor/3;
entrada=valor-(2*parcelas);

if(entrada>= parcelas){
    printf("O valor das parcelas são de: %d\n", parcelas);
    printf("O valor da entrada eh de: %f\n", entrada);

}


 return 0;
}