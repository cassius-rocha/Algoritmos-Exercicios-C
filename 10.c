/*******************************************************************************
 
A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos
de indústrias que são altamente poluentes do meio ambiente. O índice de poluição
aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 
1º grupo são intimadas a suspenderem suas atividades, se o índice crescer para
0,4 as industrias do 1º e 2º grupo são intimadas a suspenderem suas atividades,
se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas
atividades. Faça um algoritmo em C que leia o índice de poluição medido e emita 
a notificação adequada aos diferentes grupos de empresas.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float indice, minimo, maximo, suspGrupo1, suspGrupo1e2, suspGeral;
    
    minimo = 0.05;
    maximo = 0.29;
    suspGrupo1 = 0.3;
    suspGrupo1e2 = 0.4;
    suspGeral = 0.5;
    
    printf("Insira o índice atual de poluição:\n");
    scanf("%f", &indice);
    
    if(indice <= maximo) {
        printf("O índice atual de poluição está dentro do aceitável,\nentre %.2f e %.2f.\n", minimo, maximo);
    } else if(indice < suspGrupo1e2) {
        printf("O índice atual é %.2f, acima de %.2f.\nSuspender atividades do Grupo 1.", indice, maximo);
    } else if(indice < suspGeral) {
        printf("O índice atual é %.2f, acima de %.2f.\nSuspender atividades dos Grupos 1 e 2.", indice, maximo);
    } else {
        printf("O índice atual é %.2f, acima de %.2f.\nSuspender atividades de todos os Grupos.", indice, maximo);
    }

    return 0;
}


