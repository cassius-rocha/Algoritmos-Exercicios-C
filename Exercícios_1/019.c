/*******************************************************************************

Crie um código que receba 20 números inteiros e guarde-os em um vetor.
Ao final, exiba a porcentagem de números ímpares e a porcentagem de números
pares.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 20
int main()
{
    int vetor[TAMANHO_MAX], i, impar = 0, par = 0, par_porcent, impar_porcent;
    
    printf("Insira 20 números inteiros.\n");
    
    // Laço para preencher as posições do vetor
    for(i = 0; i < TAMANHO_MAX; i ++) {
        printf("Número %d: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i] %2 == 0) {
            par ++;
        }
        else {
            impar ++;
        }
    }
    
    // Cálculo da porcentagem    
    par_porcent = par * 5;
    impar_porcent = impar * 5;
    
    printf("%d porcento dos números informados é par, %d porcento dos números informados é ímpar.\n", par_porcent, impar_porcent);

    return 0;
}

