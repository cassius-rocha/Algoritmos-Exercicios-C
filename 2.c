/*******************************************************************************
 
Faça um programa em C que leia Três valores: Distancia em km, Velocidade Media e 
consumo de Combustível de um carro, calcule o tempo de viagem e quantos litros 
de combustível serão necessários para completar a viagem.

*******************************************************************************/

int main()
{
    float distancia, velocidade, consumo, tempoHora, tempoMin, combustivel;
    
    printf("Informe a distância de sua viagem em km, a velocidade média pretendida e o consumo de combustível de seu carro:\n");
    scanf("%f %f %f", &distancia, &velocidade, &consumo);
    
    tempoHora = distancia/velocidade;
    tempoMin = tempoHora*60;
    combustivel = (distancia/consumo);
    
    printf("Sua viagem levará %.2f horas (%.2f minutos),\ne o consumo de combustível será de %.2f litros", tempoHora, tempoMin, combustivel);
        
    return 0;
}
