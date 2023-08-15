/*******************************************************************************
 
Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das 
seguintes categorias:
Infantil A = 5 a 7 anos
Infantil B = 8 a 11 anos
Juvenil A = 12 a 13 anos
Juvenil B = 14 a 17 anos
Adultos = Maiores de 18 anos

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, infA = 5, infB = 8, juvA = 12, juvB = 14, adulto = 18;
    
    printf("Insira a idade do/a nadador/a.\n");
    scanf("%d", &idade);
    
    if(idade < infA) {
        printf("Idade abaixo de %d, a idade mínima permitida.", infA);
    } else if(idade < infB) {
        printf("Nadador/a tem %d anos, categoria Infantil A.", idade);
    } else if(idade < juvA) {
        printf("Nadador/a tem %d anos, categoria Infantil B.", idade);   
    } else if(idade < juvB) {
        printf("Nadador/a tem %d anos, categoria Juvenil A.", idade);
    } else if(idade < adulto) {
        printf("Nadador/a tem %d anos, categoria Juvenil B.", idade);
    } else {
        printf("Nadador/a tem %d anos, categoria Adulto.", idade);
    }

    return 0;
}

