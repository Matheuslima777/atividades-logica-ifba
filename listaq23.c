#include <stdio.h>
#include <stdlib.h>

int main(){
int n;


printf("Digite Um numero: \n");
scanf("%d", &n);


if(n%2==0){
    printf("O numero %d eh par",n);
}else{
    printf("O numero %d eh impar", n);
    }

 return 0;
}   