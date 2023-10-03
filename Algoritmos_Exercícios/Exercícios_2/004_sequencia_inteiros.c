/******************************************************************************

 Dados n e uma sequência de n números inteiros, determinar quantos segmentos de 
 números iguais consecutivos compõem essa sequência.

Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 
5, 2, 2, 3, 4, 4, 4, 4, 1, 1

Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>> 

Portanto, tenho 5 grupos.

*******************************************************************************/
#include <stdio.h>

int contadorDePosicoes(int posicoes)
{
    int i, grupos = 1, entrada[posicoes];
    
    printf("\nInsira os números: ");
    for(i = 0; i < posicoes; i ++)
    {
        scanf("%d", &entrada[i]);
        if(i > 0)
        {
            if(entrada[i] != entrada[i - 1]) grupos++;
        }
    }
    return grupos;
}

int main()
{
    int posicoes, grupos;
    
    printf("Quantos números serão inseridos? ");
    scanf("%d", &posicoes);
    
    grupos = contadorDePosicoes(posicoes);
    
    printf("\nOs números informados se dividem em %d grupos.", grupos);

    return 0;
}

