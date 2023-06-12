/*******************************************************************************
 
Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre, 
calcule a média das notas e o percentual de faltas sobre 20 aulas.  
Caso o percentual de faltas seja maior que 30%, o aluno está automaticamente reprovado, 
caso contrário, verifique se a média é maior ou igual a 6,  se afirmativo o aluno 
está aprovado, senão informe uma nota P3 para recalcular a média. Se a nova média 
for maior ou igual a 6, escreva "aprovado no exame", caso negativo exiba reprovado
por nota.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, p3, media;
    int faltas, faltasLimite;
    
    printf("Insira nota da P1, P2 e o número de faltas:\n");
    scanf("%f %f %d", &p1, &p2, &faltas);
    
    media = (p1 + p2) / 2;
    
    faltasLimite = faltas * 5;
    
    if(faltasLimite > 30) {
        printf("Aluno REPROVADO por faltas.\n");
    } else {
        if (media>=6) {
            printf("Aluno APROVADO.\nSua média é %.2f\n", media);
        } else {
            printf("Média insuficiente: %.2f\nInsira a nota da P3:\n", media);
            scanf("%f", &p3);
            
            media = (p1 + p2 + p3)/3;
                
            if (media >= 6) {
                printf("Média: %.2f\nAluno APROVADO.\n", media);
            } else {
                printf("Média: %.2f\nAluno REPROVADO.\n", media);
            }
        }
    }
    
    return 0;
}
