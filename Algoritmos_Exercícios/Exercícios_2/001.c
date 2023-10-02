/*******************************************************************************
 
Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores
positivos diferentes de n. Dado um inteiro positivo n, verificar se n é perfeito.

Exemplo 1: 6 é perfeito, pois 1+2+3 = 6	

Exemplo 2: 20 não é perfeito, pois 1+2+4+5+10 = 22

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, divisores = 0;
    
    printf("Insira um número inteiro positivo:\n");
    scanf("%i", &n);
    
    for(i = 1; i < n; i ++) {
        if(n % i == 0) {
            divisores += i;
        }
    }
    
    printf("%i\n", divisores);
    if(divisores == n) {
        printf("%i é um número perfeito!", n);
    }
    else {
        printf("%i não é um número perfeito.", n);
    }
    return 0;
}
