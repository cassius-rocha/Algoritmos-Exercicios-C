/*******************************************************************************
 
Crie um  algoritmo que receba dois valores reais: valor em R$ do litro da 
gasolina e valor em R$ do litro do álcool. Então, calcule os 70% do valor da 
gasolina para definir na tela qual combustível é o mais vantajoso, sabendo que 
o valor do álcool, para ser mais vantajoso, deve ser menor que 70% do valor da 
gasolina.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float litroGas, litAlc, porcentGas;
    
    printf("Insira o valor, em R$, do litro da gasolina e do álcool.\n");
    scanf("%f %f", &litroGas, &litAlc);
    
    porcentGas = 0.7 * litroGas;
    
    if(litAlc < porcentGas){
        printf("O litro do álcool é mais vantajoso!");
    }else{
        printf("O litro da gasolina é mais vantajoso!");
    }
    
    return 0;
}

