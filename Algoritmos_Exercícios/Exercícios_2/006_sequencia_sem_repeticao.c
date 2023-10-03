/******************************************************************************

Dados dois números naturais m e n e duas sequências ordenadas com m e n números inteiros, 
obter uma única sequência ordenada contendo todos os elementos das sequências originais 
sem repetição.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int v1[] = {1, 1, 2, 3, 4, 8, 9}, n1 = 7, 
        v2[] = {1, 3, 5, 7, 10}, n2 = 5,
        n3 = n1 + n2,
        v3[n3], v4[n3], i = 0, j = 0, k = 0;
    
    // obtendo sequência com repetição
    while(i < n1 && j < n2)
    {
        if(v1[i] <= v2[j])
        {
            v3[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    
    // laços que garantem que todos os elementos tenham sido copiados
    while(i < n1)
    {
        v3[k] = v1[i];
        i++;
        k++;
    }
    
    while(j < n2)
    {
       v3[k] = v2[j];
       j++;
       k++;
    }
    
    // inicializando o vetor v4 com zeros, para evitar lixo da memória
    for(i = 0; i < n3; i++) 
    {
        v4[i] = 0;
    }
    
    // laço para copiar elementos sem repetição para v4
    i = 0, j = 1;
    v4[0] = v3[0];
    while(j < n3)
    {
       if(v4[i] == v3[j]) j++;
       else
       {
           v4[i + 1] = v3[j];
           i++;
           j++;
       }
    }
    
    for(i = 0; i < n3; i++)
    {
        printf("%d ", v4[i]);
    }
    return 0;
}