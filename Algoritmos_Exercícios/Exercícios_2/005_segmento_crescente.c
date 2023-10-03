/******************************************************************************

Dados n e uma sequência de n números inteiros, determinar o comprimento de 
um segmento crescente de comprimento máximo.

Exemplos:

Na sequência 5, 10, 3, <<2, 4, 7, 9>>, 8, 5 o comprimento do segmento crescente 
máximo é 4.

Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.

Outra sequência: 6, 4, 9, 10, 12, 13, 5, 2, 4, 8, 16, 32 -> 5

*******************************************************************************/
#include <stdio.h>

int comprimento(int n, int seq[])
{
    int i, segmento = 1, maior = 1;
    
    for(i = 0; i < n; i ++)
    {
        //verifica tamanho da sequência
        if(seq[i + 1] > seq[i]) segmento ++;
        
        //compara tamanho da sequência
        else if(segmento > maior) 
        {
            maior = segmento;
            segmento = 1;
        }
        else segmento = 1;
    }
    
    return maior;
}

int main()
{
    int k, i, resultado;
    
    printf("Quantos elementos terá a sequência? ");
    scanf("%d", &k);
    
    int seq[k];
    
    printf("\nDigite cada um dos elementos: ");
    for(i = 0; i < k; i ++) 
    {
        scanf("%d", &seq[i]);
    }
    
    resultado = comprimento(k, seq);
    
    printf("\nO comprimento do maior segmento crescente é %d.", resultado);
    
    return 0;
}

