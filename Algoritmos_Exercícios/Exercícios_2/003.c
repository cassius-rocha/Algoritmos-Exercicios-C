/******************************************************************************

Dado um número natural na base decimal, transformá-lo para a base binária.

Exemplo: Dado 18 a saída deverá ser 10010.

*******************************************************************************/
#include <stdio.h>
#define BASE 2

int main()
{
    int resto, binario = 0, decimal, posicao = 1;
    
    printf("Insira um número decimal:\n");
    scanf("%d", &decimal);
   
    while(decimal > 0)
    {
        resto = decimal % BASE;
        binario += resto * posicao;
        decimal = decimal / BASE;
        posicao *= 10;
    }
    
    printf("%d", binario);


    return 0;
}
