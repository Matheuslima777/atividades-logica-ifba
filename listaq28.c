#include <stdio.h>
#include <stdlib.h>

int main(){
char letra;


printf("Digite uma letra minuscula: \n");
scanf("%c", &letra);

if(letra=='a' || letra== 'e' || letra=='i' || letra=='o' || letra=='u'){
    printf("EH UMA VOGAL");
}else{
    printf("EH UMA CONSOANTE");
}

 return 0;
}   