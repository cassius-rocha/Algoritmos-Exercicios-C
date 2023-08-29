/******************************************************************************

Dados n e uma sequência de n números inteiros, determinar quantos segmentos de 
números iguais consecutivos compõem essa sequência.

Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 
5, 2, 2, 3, 4, 4, 4, 4, 1, 1

Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>> 

Portanto, tenho 5 grupos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, grupos = 1;
    
    printf("Quantas posições terão o vetor?\n");
    scanf("%d",  &n);
    
    int vetor1[n];
    
    printf("Agora, insira cada um dos números que entrarão no vetor.\n");
    
    for(i=0; i<n; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor1[i]);
        if(i > 0)
        {
            if(vetor1[i] != vetor1[i-1]) grupos++;
        }
    }
    
    printf("O vetor\n");
    for(i=0; i<n; i++) printf("%d ", vetor1[i]);
    printf("\ntem %d grupos de elementos iguais.", grupos);
    
    return 0;
}

