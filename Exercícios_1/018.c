/*******************************************************************************

Crie um jogo simples de adivinhação, que deve consistir na seguinte mecânica:
- após cada tentativa, o usuário deve ser informado se o palpite está abaixo ou
acima do número secreto;
- o número secreto estará previamente definido por você;
- após cada tentativa, um contador indica ao usuário quantas tentativas já foram.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int secreto = 42, palpite=0, contador=0;
    
    do {
        printf("Qual é o número secreto?\n");
        scanf("%d", &palpite);
        
        if(palpite == secreto) {
            contador ++;
            printf("Parabéns, você acertou, o número secreto é %d! Foram %d tentativas!\n", secreto, contador);
        }
        
        else if(palpite < secreto) {
            if(palpite - secreto == -1) {
            printf("O número secreto é maior! Você está muito perto, tente novamente!\n");
            }
            else {
            printf("O número secreto é maior! Tente novamente!\n");
            }
            contador ++;
        }
        
        else {
            if(palpite - secreto == 1) {
            printf("O número secreto é menor! Você está muito perto, tente novamente!\n");
            }
            else {
            printf("O número secreto é menor! Tente novamente!\n");
            }
            contador ++;
        }
    } 
    while (palpite != secreto);
    
    
    return 0;
}

