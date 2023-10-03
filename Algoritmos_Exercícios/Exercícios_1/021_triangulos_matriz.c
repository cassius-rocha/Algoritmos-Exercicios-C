/******************************************************************************

Implemente um código que receba uma matriz, na qual serão informados os valores 
dos lados de um triângulo. Cada linha terá 3 colunas, cada uma correspondente a 
um lado do triângulo. Em seguida, calcule a porcentagem de triângulos escalenos,
isósceles e equiláteros.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM_MAX 10

int main()
{
    int matriz[TAM_MAX] [3], i, lado1, lado2, lado3, equilatero = 0, escaleno = 0, 
        isosceles = 0, equiPorc, escPorc, isoPorc;
    
    // Bloco para receber e comparar os lados dos triângulos
    for(i = 0; i < TAM_MAX; i ++) {
        printf("Informe os lados do triângulo %d:\n", i);
        scanf("%d %d %d", &matriz[i] [0], &matriz[i] [1], &matriz[i] [2]);
        lado1 = matriz[i] [0];
        lado2 = matriz[i] [1];
        lado3 = matriz[i] [2];
            
        if(lado1 == lado2 && lado2 == lado3) equilatero ++;
        else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1) escaleno ++;
        else isosceles ++;
    }
    
    // Cálculo da porccentagem
    equiPorc = equilatero * TAM_MAX;
    isoPorc = isosceles * TAM_MAX;
    escPorc = escaleno * TAM_MAX;
    
    printf("Dos triângulos informados,\n%d%% são equiláteros,\n%d%% são isósceles,\n%d%% são escalenos.\n", equiPorc, isoPorc, escPorc);
    
    return 0;
}