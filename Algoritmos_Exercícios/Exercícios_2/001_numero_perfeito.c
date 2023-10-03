/*******************************************************************************
 
Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores
positivos diferentes de n. Dado um inteiro positivo n, verificar se n é perfeito.

Exemplo 1: 6 é perfeito, pois 1+2+3 = 6	

Exemplo 2: 20 não é perfeito, pois 1+2+4+5+10 = 22

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void inteiroPositivo(int inteiro)
{
    int i, divisores = 0;
    
    for(i = 1; i < inteiro; i ++) 
    {
        if(inteiro % i == 0) divisores += i;
    }
    
    if(divisores == inteiro) 
    {
        printf("%i é um número perfeito!", inteiro);
    }
    else 
    {
        printf("%i não é um número perfeito.", inteiro);
    }
}

int main()
{
    int inteiro;
    
    printf("Insira um número inteiro positivo:\n");
    scanf("%i", &inteiro);
    
    inteiroPositivo(inteiro);
    
    return 0;
}