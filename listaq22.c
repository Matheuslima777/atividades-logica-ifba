#include <stdio.h>
#include <stdlib.h>

int main(){
int n, modulo;


printf("Digite Um numero: \n");
scanf("%d", &n);


if(n>0){
    printf("O modulo do numero %d eh %d",n,n);
}else{
    printf("O modulo do numero %d eh  %d",n,n-n*2);
    }

 return 0;
}   