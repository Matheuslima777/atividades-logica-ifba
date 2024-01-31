#include <stdlib.h>
#include <stdio.h>

int main (){

int n, sucessor;

printf("DIGITE UM NUMERO INTEIRO: ");
scanf("%d", &n);

sucessor= n+1;

printf("O SUCESSOR DE %d EH: %d", n, sucessor); 
 //No comando "printf"não precisa utilizar o & para utilizar a variavel. 
//É preciso adicionar a "%" no lugar onde aparecerá os valores

getchar();
    return 0;
}