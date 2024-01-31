#include <stdio.h>
#include <stdlib.h>

int main(){
float n1,n2,n3, mediap;


printf("Digite 3 numeros inteiros numero: \n");
scanf("\n%f\n%f\n%f", &n1, &n2, &n3);

if(n1>=n2 && n1> n3){
    mediap=((n1*5)+(n2*2.5)+(n3*2.5))/10;
    printf("A MEDIA PONDERADA EH: \n%f", mediap);
}else if(n2>n1 && n2>=n3){
    mediap=((n2*5)+(n1*2.5)+(n3*2.5))/10;
    printf("A MEDIA PONDERADA EH: \n%f", mediap);
}else if(n3>n2 && n3>=n1){
    mediap=((n3*5)+(n1*2.5)+(n2*2.5))/10;
    printf("A MEDIA PONDERADA EH: \n%f", mediap);
}else{
    printf("\t\tTODOS ALGARISMOS IGUAIS NÂO SÂO SUPORTADOS PARA A REALIZACAO DA FORMULA");
}



 return 0;
}   