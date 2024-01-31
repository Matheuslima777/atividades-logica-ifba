#include <stdio.h>
#include <stdlib.h>

int main(){
int n;


printf("Digite Um numero: \n");
scanf("%d", &n);

if(n>0){
    printf("O numero %d eh positivo", n);
}else{
    printf("O numero %d eh negativo", n);
}


 return 0;
}   