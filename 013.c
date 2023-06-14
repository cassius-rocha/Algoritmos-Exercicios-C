/*******************************************************************************
 
Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista 
estava dirigindo nela. Calcule e mostre a multa que uma pessoa vai receber, 
sabendo que são pagos: R$ 50 reais se o motorista ultrapassar em até 10km/h 
a velocidade permitida; R$ 100 reais, se o motorista ultrapassar de 11 a 30 km/h 
a velocidade permitida; e R$ 200 reais, se estiver acima de 31km/h da velocidade 
permitida.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float velocidadeMax, velocidadeRadar, multa1, multa2, multa3, limite1, limite2;
    
    multa1 = 50;
    multa2 = 100;
    multa3 = 200;
    
    printf("Insira a velocidade máxima permitida no trecho:\n");
    scanf("%f", &velocidadeMax);
    printf("Insira a velocidade captada pelo radar:\n");
    scanf("%f", &velocidadeRadar);
    
    limite1 = velocidadeMax + 10;
    limite2 = velocidadeMax + 30;
    
    if(velocidadeRadar <= velocidadeMax) {
        printf("O veículo estava a %.2f km/h.\nNão houve infração.", velocidadeRadar);
    } else if(velocidadeRadar <= limite1) {
        printf("O veículo estava a %.2f km/h.\nInfração cometida, multa no valor de R$ %.2f.", velocidadeRadar, multa1);
    } else if(velocidadeRadar <= limite2) {
        printf("O veículo estava a %.2f km/h.\nInfração cometida, multa no valor de R$ %.2f.", velocidadeRadar, multa2);
    } else {
        printf("O veículo estava a %.2f km/h.\nInfração cometida, multa no valor de R$ %.2f.", velocidadeRadar, multa3);
    }
    
    return 0;
}

