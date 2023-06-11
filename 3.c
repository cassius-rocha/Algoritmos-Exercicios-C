/*******************************************************************************
 
Faça um programa em C que, dada uma distancia em km, converta e exiba em milhas,
onde 1Milha = 1,60934km.

*******************************************************************************/

#include <stdio.h>
#define mi 1.60934

int main()
{
    float km, milhas;
    
    printf("Informe a distância em quilômetros:\n");
    scanf("%f", &km);
    
    milhas = km/mi;
    
    printf("A distância, em milhas, é %.2f.\n", milhas);

    return 0;
}