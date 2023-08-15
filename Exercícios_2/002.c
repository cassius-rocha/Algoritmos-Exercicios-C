/******************************************************************************

 Dado um número natural na base binária, transformá-lo para a base decimal.

Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define BASE 10

int main()
{
    int bin, quociente, resto, decimal = 0, potenciaDe2 = 1;
    
    printf("Insira um número binário:\n");
    scanf("%i", &bin);
    
    while(bin > 0){
        resto = bin % BASE;
        quociente = bin / BASE;
        decimal += resto * potenciaDe2;
        bin = quociente;
        potenciaDe2 *= 2;
    }
    
    printf("%i", decimal);
    
    return 0;
}
