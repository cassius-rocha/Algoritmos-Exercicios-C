/*******************************************************************************
 
Faça um algoritmo que implemente um laço que leia X números inteiros e identifique 
qual o menor, o maior e a média; quando o número informado for zero, interrompa o 
laço e exiba os valores.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, n, contador = 0;
    float media = 0;
    
    do {
        printf("Insira um número inteiro, ou 0 para fechar e mostrar os valores:\n");
        scanf("%d", &n);
        
        if(n != 0) {
            media += n;
            contador ++;
            if(contador == 1) {
                menor = n;
                maior = n;
            }
            else {
                if(n > maior) {
                    maior = n;
                } 
                if(n < menor) {
                    menor = n;
                }
            }
        }
    } while(n != 0);
    
    media /= contador;
    printf("O maior número digitado foi %d, o menor foi %d, e a média de todos foi %.2f.\n", maior, menor, media);
    return 0;
}