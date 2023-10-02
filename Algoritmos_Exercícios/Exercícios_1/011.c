/*******************************************************************************
 
A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os funcionários
com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% e 5% para 
funcionários com um ano ou menos.
Faça um um programa em C que receba o salário e o tempo de serviço de um
funcionário, calcule e mostre o valor do bônus recebido por ele.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, tempo, anos, meses, bonus1, bonus2, bonus3, tempoDeCasa1, tempoDeCasa2;
    
    printf("Insira o seu salário atual:\n");
    scanf("%f", &salario);
    printf("Insira o seu tempo de trabalho em anos e meses:\nSe tiver menos de um ano, primeiro insira 0, depois o número de meses.\n");
    scanf("%f %f", &anos, &meses);
    
    tempo = (anos * 12) + meses;//conversão do tempo em meses
    bonus1 = salario * 0.2;
    bonus2 = salario * 0.1;
    bonus3 = salario * 0.05;
    tempoDeCasa1 = 60; //bônus máximo
    tempoDeCasa2 = 12; //bônus médio
    
    if(tempo >= tempoDeCasa1) {
        printf("Parabéns, seu bônus é de R$ %.2f.", bonus1);
    } else if(tempo >= tempoDeCasa2) {
        printf("Parabéns, seu bônus é de R$ %.2f.", bonus2);
    } else {
        printf("Parabéns, seu bônus é de R$ %.2f.", bonus3);
    }
    return 0;
}

