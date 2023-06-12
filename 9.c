/*******************************************************************************
 
Informe dois números reais e um número inteiro que represente a operação matemática
a ser realizada (1-soma, 2-subtração, 3- multiplicação, 4-divisão), utilize o comando
seleção aninhado e exiba o resultado da operação matemática escolhida.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float f1, f2, resultado;
    int i;
    
    printf("Insira dois números reais:\n");
    scanf("%f %f", &f1, &f2);
   
    printf("Escolha a operação desejada:\n1 - soma:\n2 - subtracao:\n3 - multiplicacao:\n4 - divisao:\n");
    scanf("%d", &i);
    
    if(i == 1) {
        resultado = f1 + f2;
        printf("resultado da soma: %.2f\n", resultado);
    } else if (i == 2) {
        resultado = f1 - f2;
        printf("resultado da subtracao: %.2f\n", resultado);
    } else if (i == 3) {
        resultado = f1 * f2;
        printf("resultado da multiplicacao: %.2f\n", resultado);
    } else if (i == 4) {
        resultado = f1 / f2;
        printf("resultado da divisao: %.2f\n", resultado);
    } else {
        printf("Operacao inválida.\n");
    }
    
    return 0;
}
