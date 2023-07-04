/*******************************************************************************
 
Identifique e calcule a comissão de um vendedor baseado no valor de venda informado, 
mostre o valor calculado ao final:
• 0,01 a 100, comissão de 1%
• 100,01 a 200, comissão de 2%
• 200,01 a 300, comissão de 3 %
• 300,01 a 400, comissão de 4%
• Acima de 400,01 comissão de 5%

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float venda, comissao;
    
    printf("Insira o valor da venda:\n");
    scanf("%f", &venda);
    
    if(venda <= 100) {
        comissao = venda * 0.01;
        printf("Sua comissão é de R$ %.2f.\n", comissao);
    } else if(venda <= 200) {
        comissao = venda * 0.02;
        printf("Sua comissão é de R$ %.2f.\n", comissao);
    } else if(venda <= 300) {
        comissao = venda * 0.03; 
        printf("Sua comissão é de R$ %.2f.\n", comissao);    
    } else if(venda <= 400) {
        comissao = venda * 0.04;
        printf("Sua comissão é de R$ %.2f.\n", comissao);  
    } else {
        comissao = venda * 0.05; 
        printf("Sua comissão é de R$ %.2f.\n", comissao);      
    }
    
    return 0;
}

