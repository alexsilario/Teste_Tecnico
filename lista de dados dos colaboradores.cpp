#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char nome[40];
	char cpf[14];
	float vhora [4], horaf[4], pag[6];
	
		printf("Digite o nome do colaborador: ");
		fgets(nome, 40, stdin);
		printf("\nDigite o CPF do colaborador: ");
		fgets(cpf, 14, stdin);
		printf("\nDigite o valor da hora: ");
		scanf("%f", vhora);
		printf("\nDigite a quantidade de hora trabalhada: ");
		scanf("%f",horaf, 4, stdin);
		
	return 0;
	
	//Desafio proposto com objetivo não alcançado.
}
	