#include <stdio.h>
#include <stdlib.h>

int main(){
int mes;

    printf("\t\t PROGRAMA SEM ESPECIFICAR OS NOMES DOS MESES\n\n");
printf("Digite o numero referenta a um dos meses do ano: \n");
scanf("%d", &mes);

    if(mes ==1 || mes==3|| mes==5 || mes==7|| mes==8 || mes==10|| mes==12){
    printf("O mes %d tem 31 dias\n", mes);
    }else if(mes==4 || mes==6 || mes==9|| mes==11){
    printf("O mes %d tem 30 dias\n", mes);
    }else if(mes==2){
    printf("O mes %d pode ter 28 ou 29 dias\n", mes);
    }else{
    printf("Mes inexistente\n");
    }
    system("pause");
    system("cls");

printf("\t\t PROGRAMA ESPECIFICANDO OS NOMES DOS MESES\n\n");

printf("Digite o numero referenta a um dos meses do ano: \n");
scanf("%d", &mes);

switch (mes)
{
case 1: printf("O MES DE JANEIRO TEM 31 DIAS");
    break;
    case 2: printf("O MES DE FEVEREIRO PODE TER 28 OU 29 DIAS");
    break;
    case 3: printf("O MES DE MARCO TEM 31 DIAS");
    break;
    case 4: printf("O MES DE ABRIL TEM 30 DIAS");
    break;
    case 5: printf("O MES DE MAIO TEM 31 DIAS");
    break;
    case 6: printf("O MES DE JUNHO TEM 30 DIAS");
    break;
    case 7: printf("O MES DE JULHO TEM 31 DIAS");
    break;
    case 8: printf("O MES DE AGOSTO TEM 31 DIAS");
    break;
    case 9: printf("O MES DE SETEMBRO TEM 30 DIAS");
    break;
    case 10: printf("O MES DE OUTUBRO TEM 31 DIAS");
    break;
    case 11: printf("O MES DE NOVEMBRO TEM 30 DIAS");
    break;
    case 12: printf("O MES DE DEZEMBRO TEM 31 DIAS");
    break;
    default:printf("MES INEXISTENTE");
    break;
}

    return 0;
}   