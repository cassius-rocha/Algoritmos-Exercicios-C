/*******************************************************************************
 
Faça o cálculo do salário líquido e mostre ao final o resultado calculado 
através de um salário bruto informado seguindo as devidas regras:
• Primeiro deduzir o INSS de 11% do salário bruto antes de verificar a faixa do IR
• Faixa de R$ 1,00 a R$ 1020,00 Isento de IR
• Faixa de R$ 1020,01 a R$ 2.500,00 7% de taxa de IR
• Faixa de R$ 2500,01 a R$ 3.800,00 15% de taxa de IR
• Faixa de R$ 3800,01 e acima, 27.5% de taxa de IR
• Ao final calcular e exibir Salário Líquido = (Salário bruto – INSS) – IR

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float salBruto, salLiquido, salINSS, descontoINSS;
   
   printf("Informe seu salário bruto:\n");
   scanf("%f", &salBruto);
   
   // Salário menos INSS.
   salINSS = salBruto - (salBruto * 0.11);
   
   if(salINSS <= 1020) {
       printf("Salário líquido de R$ %.2f, isento de IR.\n", salINSS);
   } else if(salINSS <= 2500) {
       descontoINSS = salINSS * 0.07;
       salLiquido = salINSS - descontoINSS;
       printf("Desconto do IR de R$ %.2f.\n", descontoINSS);
       printf("Salário líquido de R$ %.2f.\n", salLiquido);
   } else if(salINSS <= 3800) {
       descontoINSS = salINSS * 0.15;
       salLiquido = salINSS - descontoINSS;
       printf("Desconto do IR de R$ %.2f.\n", descontoINSS);
       printf("Salário líquido de R$ %.2f.\n", salLiquido);
   } else {
       descontoINSS = salINSS * 0.275;
       salLiquido = salINSS - descontoINSS;
       printf("Desconto do IR de R$ %.2f.\n", descontoINSS);
       printf("Salário líquido de R$ %.2f.\n", salLiquido);
   }
    return 0;
}