#include <stdio.h>
#include <stdlib.h>

int main(){
int n1, n2, n3;


printf("Digite 3 numeros inteiros: \n");
scanf("\n%d\n%d\n%d", &n1, &n2,&n3);


    if(n1> n2 && n1> n3){
        printf("O maior numero eh o %d", n1);
    }else if(n2> n1 && n2> n3){
        printf("O maior numero eh o %d", n2);
    }else if(n3> n2 && n3 > n1){
    printf("O maior numero eh o %d", n3);
    }

    return 0;
}   