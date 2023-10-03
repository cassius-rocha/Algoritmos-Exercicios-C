/******************************************************************************

Dado um número natural na base decimal, transformá-lo para a base binária.

Exemplo: Dado 18 a saída deverá ser 10010.

*******************************************************************************/
#include <stdio.h>
#define BASE 2

int conversorDecimal(int decimal)
{
    int resto, binario = 0, posicao = 1;
    
    while(decimal > 0)
    {
        resto = decimal % BASE;
        binario += resto * posicao;
        decimal = decimal / BASE;
        posicao *= 10;
    }
    return binario;
}

int main()
{
    int decimal, resultado;
    
    printf("Insira um número decimal:\n");
    scanf("%d", &decimal);
   
    resultado = conversorDecimal(decimal);
    printf("\nBinário = %d.", resultado);

    return 0;
}