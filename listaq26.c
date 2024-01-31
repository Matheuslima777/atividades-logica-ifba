#include <stdio.h>
#include <stdlib.h>

int main(){
int n1,n2,n3;


printf("Digite 3 numeros inteiros numero: \n");
scanf("\n%d\n%d\n%d", &n1, &n2, &n3);


if(n1>=n2 && n2>n3){
    printf("\n%d",n1+n2);
}else if(n1>=n2 && n3> n2){
    printf("\n%d",n1+n3);
    }else if(n2>= n1 && n1> n3){
        printf("\n%d",n2+n1);
    }else if(n2>=n1 && n3>n1){
        printf("\n%d",n2+n3);
    }else if(n3>=n2 && n2> n1){
        printf("\n%d",n3+n2);
    }else if(n3>= n2 && n1> n2){
        printf("\n%d",n3+n1);
    }else{
        printf("%d", n1+n2+n3);
    }

 return 0;
}   