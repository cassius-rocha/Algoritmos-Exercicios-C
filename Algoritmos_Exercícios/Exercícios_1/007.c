/*******************************************************************************
 
Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário, imprima:  Empréstimo não concedido; 
caso contrário, imprima:  Empréstimo concedido.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salário, empréstimo, prestação;
    int  numDePrestações;
    
    printf("Informe o seu salário líquido:\n");
    scanf("%f", &salário);
    
    printf("Informe o valor do empréstimo desejado e a quantidade de prestações pretendidas:\n");
    scanf("%f %d", &empréstimo, &numDePrestações);
    
    prestação = empréstimo / numDePrestações;
    
    if(prestação > (salário * 0.2)){
        printf("Empréstimo não concedido.\nTente aumentar o número de parcelas ou diminuir o valor do empréstimo.");
    }else{
        printf("Parabéns, empréstimo concedido!\nSerão %d prestações de R$ %.2f.", numDePrestações, prestação);
    }

    return 0;
}

