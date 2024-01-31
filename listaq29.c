#include <stdio.h>
#include <stdlib.h>

int main(){
float salario, desconto;


printf("DIGITE O VALOR DO SALARIO DO FUNCIONARIO: \n");
scanf("%f", &salario);

desconto=(salario*0.11);

if(salario> 3029.80){
printf("O DESCONTO EH DE 334.29");
}else{
    printf("O DESCONTO EH DE: %.2f", desconto);
}
 return 0;
}   