/******************************************************************************

 Dado um número natural na base binária, transformá-lo para a base decimal.

Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define BASE 10

int conversorBin(int binario)
{
    int quociente, resto, decimal = 0, potenciaDe2 = 1;
    
    while(binario > 0){
        resto = binario % BASE;
        quociente = binario / BASE;
        decimal += resto * potenciaDe2;
        binario = quociente;
        potenciaDe2 *= 2;
    }
    return decimal;
}

int main()
{
    int binario, decimal;
    
    printf("Insira um número binário:\n");
    scanf("%i", &binario);
    
    decimal = conversorBin(binario);
    
    printf("\nDecimal = %d.", decimal);
    return 0;
}

