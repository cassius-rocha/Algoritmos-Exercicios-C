/******************************************************************************

Implemente um código que receba um vetor de inteiros. Em seguida, crie um outro 
vetor que receba os elementos do primeiro, mas em ordem inversa.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 10

int main()
{
    int vetor1[TAMANHO_MAX], vetor2[TAMANHO_MAX], i, j;
    
    for(i = 0; i < TAMANHO_MAX; i ++) {
        printf("Insira um número inteiro:\n");
        scanf("%d", &vetor1[i]);
    }
    
    for(i = 0, j = TAMANHO_MAX - 1; i < TAMANHO_MAX; i++, j--) {
        vetor2[i] = vetor1[j];
    }
    
    printf("Valores do vetor 1:\n");
    for(i = 0; i < TAMANHO_MAX; i ++) {
        printf("%d ", vetor1[i]);
    }
    
    printf("\nValores do vetor 2:\n");
    for(j = 0; j < TAMANHO_MAX; j ++) {
        printf("%d ", vetor2[j]);
    }

    return 0;
}