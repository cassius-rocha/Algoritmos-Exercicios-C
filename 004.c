/*******************************************************************************
 
Faça um algoritmo que receba um número inteiro e identifique se é par ou 
impar. Utilize o módulo de 2 para calcular o resto da divisão, se o resto da 
divisão for zero (o número é par), caso o resto da divisão seja 1 (o número é impar).
resto = numero % 2

*******************************************************************************/

#include <stdio.h>

int main()
{
   int numero;
   
    printf("Insira um número inteiro:\n");
    scanf("%i", &numero);
   
    if(numero % 2 == 1){
        printf("O número inserido é ímpar.");
    }else{
        printf("O número inserido é par.");
    }
    
    return 0;
}

