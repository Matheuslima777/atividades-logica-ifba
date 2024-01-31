#include <stdlib.h>
#include <stdio.h>

int main (){

int temp, convert;


printf("INFORME A TEMPERATURA EM FARENHEITS:\n");
scanf("%d", &temp);

convert = ((temp - 32)*5)/9;



printf("A TEMPERATURS EM GRAUS CELSIUS EH DE: %d", convert);

    return 0;
}