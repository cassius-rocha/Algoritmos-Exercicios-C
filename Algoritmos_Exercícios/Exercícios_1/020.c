/******************************************************************************

Implemente um código que receba um vetor, imprima todos os elementos do vetor,
identifique o maior valor, o menor e a média.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n = 0, maior = 0, menor = 100;
    float media = 0;
    
   printf("Quantas posições terão o vetor?\n");
   scanf("%d", &n);
   
   int vetor[n];
   
   printf("Agora, insira cada um dos elementos:\n");
   
   // laço para preencher as posições do vetor
   for(i=0; i<n; i++)
   {
       printf("Posição %d: ", i);
       scanf("%d", &vetor[i]);
   }
   
   maior = vetor[0], menor = vetor[0];
   
   printf("O vetor tem os seguintes valores: \n");
   
   //laço para imprimir os valores, calcular a média e identificar o maior e o menor valor
   for(i=0; i<n; i++)
   {
       printf("%d ", vetor[i]);
       media += vetor[i];
       if(vetor[i] > maior) maior = vetor[i];
       if(vetor[i] < menor) menor = vetor[i];
   }
    media /= n;
    
    printf("\nem que o maior é %d, o menor é %d e a média é %.2f.", maior, menor, media);
    
    return 0;
}

