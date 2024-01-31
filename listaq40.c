#include <stdlib.h>
#include <stdio.h>

int main(){

int q,r,n;

printf("DIGITE UM NUMJERO INTEIRO DE 1 A 100: \n");
scanf("%d", &n);

q=n/10;
r=n%10;

    if(q==0){
    switch (r)
    {
    case 1: printf("UM");break;
    case 2: printf("DOIS"); break;
    case 3: printf("TRES"); break;
    case 4: printf("QUATRO"); break;
    case 5: printf("CINCO"); break;
    case 6: printf("SEIS"); break;
    case 7: printf("SETE"); break;
    case 8: printf("OITO"); break;
    case 9: printf("NOVE"); break;
    case 10: printf("DEZ"); break;}
    }

        if(q==1){
        switch (r)
        {
        case 1: printf("ONZE");break;
        case 2: printf("DOZE"); break;
        case 3: printf("TREZE"); break;
        case 4: printf("QUATORZE"); break;
        case 5: printf("QUINZE"); break;
        case 6: printf("DEZESSEIS"); break;
        case 7: printf("DEZOITO"); break;
        case 9: printf("DEZENOVE"); break;}
        }

        if(q >=2){
        switch (q)
        {
        case 2: printf("VINTE"); break;
        case 3: printf("TRINTA"); break;
        case 4: printf("QUARENTA"); break;
        case 5: printf("CINQUENTA"); break;
        case 6: printf("SESSENTA"); break;
        case 7: printf("SETENTA"); break;
        case 8: printf("OITENTA"); break;
        case 9: printf("NOVENTA"); break;
        case 10: printf("CEM");
        }

            switch (r)
            {
            case 0:printf("..."); break;
            case 1: printf(" E UM");break;
            case 2: printf(" E DOIS"); break;
            case 3: printf(" E TRES"); break;
            case 4: printf(" E QUATRO"); break;
            case 5: printf(" E CINCO"); break;
            case 6: printf(" E SEIS"); break;
            case 7: printf(" E SETE"); break;
            case 8: printf(" E OITO"); break;
            case 9: printf(" E NOVE"); break;
            }
        }
 return 0;
}

   
