#include <stdio.h>
#include <stdlib.h>

int main(){
int qtd;
float valor;
char tipo;


printf("DIGITE O TIPO DE COMBUSTIVEL DESEJADO: (g/a)? \n");
scanf("%c", &tipo);


printf("DIGITE QUAL A QUANTIDADE EM LITROS: \n");
scanf("%d", &qtd);

if(tipo=='a' && qtd<= 25){
    valor=(qtd*1.90)-((1.9*0.02)*qtd);
    printf("O VALOR A SER PAGO EH DE : \n%.2f", valor);
}else if(tipo=='a' && qtd> 25){
    valor=(qtd*1.90)-((1.9*0.04)*qtd);
    printf("O VALOR A SER PAGO EH DE : \n%.2f", valor);
}else if(tipo=='g' && qtd<= 25){
     valor=(qtd*2.70)-((2.70*0.03)*qtd);
     printf("O VALOR A SER PAGO EH DE : \n%.2f", valor);
}else if(tipo=='g' && qtd> 25){
        valor=(qtd*2.70)-((2.70*0.05)*qtd);
     printf("O VALOR A SER PAGO EH DE : \n%.2f", valor);

}



 return 0;
}   