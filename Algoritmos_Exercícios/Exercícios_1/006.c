/*******************************************************************************
 
Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira
e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média
do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação
deve ser igual ou superior a 60 pontos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, n3, mediaPond;
    
    printf("Insira a nota das 3 avaliações:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    mediaPond = (n1 + n2 + (n3 * 2)) / 4;
    
    printf("Sua média é %.2f.\n", mediaPond);
    
    if(mediaPond >= 6){
        printf("Parabéns! Você foi aprovado!");
    }else{
        printf("Você não foi aprovado.");
    }

    return 0;
}

