/*******************************************************************************
 
Faça um programa que calcule a média ponderada de 3 números reais (A,B e C) e
mostre o resultado. Os pesos das notas serão, respectivamente, 2,3,5.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a, b, c, media;
    
    printf("Informe suas notas a, b, c:");
    scanf("%f %f %f", &a, &b, &c);
    
    media = (a*2+b*3+c*5)/3;
    printf("Sua média ponderada é %.2f", media);

    return 0;
}

