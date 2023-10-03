#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CPF_MAX 11

int digitoVerificador(int cpf[], int mult[], int N)
{
    int i, soma = 0, resto;
    for(i = 0; i < N; i++)
    {
        soma += cpf[i] * mult[i];
    }
    resto = ((soma * 10) % CPF_MAX) % 10;
    return resto;
}

bool digitosIguais(int cpf[])
{
    int i;
    for(i = 0; i <= 10; i++)
    {
        if(cpf[0] != cpf[i]) 
            return false;
    }
    return true;
}

void estadoDeOrigem(int cpf[])
{
    char estados[10][80]=
    {
        "Rio Grande do Sul",
        "Distrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins",
        "Amazonas, Pará, Roraima, Amapá, Acre e Rondônia",
        "Ceará, Maranhão e Piauí",
        "Paraíba, Pernambuco, Alagoas e Rio Grande do Norte",
        "Bahia e Sergipe",
        "Minas Gerais",
        "Rio de Janeiro e Espírito Santo",
        "São Paulo",
        "Paraná e Santa Catarina"
    };
        printf("\nEstado de origem: %s", estados[ cpf[8] ]);
}

void conversãoEntrada(char entrada[], int cpf[])
{
    int i, k = CPF_MAX-1, tamanho = strlen(entrada);
    
    // inicialiazndo o vetor cpf com zeros
    for(i = 0; i < CPF_MAX; i ++) cpf[i] = 0;
    
    // laço para inserir os dígitos válidos no vetor cpf
    for(i = tamanho-1; i >= 0; i--)
    {
        if(entrada[i] >= 48 && entrada[i] <= 57)
        {
            cpf[k] = entrada[i] - 48;
            k--;
        }
    }
    
}


int main()
{
	char entrada[20];
	int cpf[CPF_MAX];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	
	// entrada do cpf como string
	printf("Insira o CPF: ");
    fgets(entrada, 20, stdin);
    
    // chamada da função que converte o cpf
    conversãoEntrada(entrada, cpf);
    
	// chamada das funções que validam o cpf
	if((digitoVerificador(cpf, m1, 9)) == cpf[9] &&
	   (digitoVerificador(cpf, m2, 10)) == cpf[10] &&
	   !digitosIguais(cpf))
	{
	    printf("\nCPF válido.");
	    estadoDeOrigem(cpf);
	}
	else printf("\nCPF inválido.");
	
	return 0;
}
