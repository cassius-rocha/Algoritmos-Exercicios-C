/*******************************************************************************
 
Faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será 
apresentado uma lista de operações:

1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor início para a variável saldo, se o 
cliente escolher a opção 1 mostre o valor do saldo, caso escolha o valor 2 
leia o valor a ser sacado e verifique se existe saldo suficiente, se o saldo 
for maior ou igual , deduza da variável saldo o valor solicitado, caso não haja 
saldo suficiente mostre a mensagem “Saldo Insuficiente”, caso a opção 3 seja 
escolhida adicione o valor informado de deposito ao saldo.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//preferi inserir o programa em um laço do while, para dar a opção de fazer outras operações

int main()
{
    float saldo, saque, deposito;
    int i, continuar;
    
    saldo = 1000;
 do {   
        printf("Escolha a operação desejada:\n");
        printf("1 - para saldo;\n");
        printf("2 - para saques;\n");
        printf("3 - para depósitos.\n");
        scanf("%d", &i);
        
        switch(i){
            case 1:{
                printf("Seu saldo é de R$ %.2f.\n", saldo);
                break;
            }
            case 2:{
                printf("Informe o valor da saque:\n");
                scanf("%f", &saque);
                    if(saque <= saldo) {
                        
                        saldo -= saque;
                        
                        printf("Saque autorizado, retire o dinheiro no local indicado.\n");
                        printf("Saldo restante de R$ %.2f.\n", saldo);
                    } else {
                        printf("Seu saldo é %.2f, saldo insuficiente para sacar o valor desejado.\n", saldo);
                    }
                    break;
            }
            case 3:{
                printf("Insira o valor a ser depositado.\n");
                scanf("%f", &deposito);
                
                saldo += deposito;
                
                printf("Valor depositado com sucesso, seu saldo atual é de R$ %.2f.\n", saldo);
                break;
            }
            default: {
                printf("Opção inválida.\n");
            }
        }
        
        printf("Deseja fazer outra operação?\n1 - para SIM\n0 - para NÃO\n");
        scanf("%d", &continuar);
        
    }while (continuar == 1);
    
    printf("Obrigado por utilizar nossos serviços!");
    
    return 0;
}

