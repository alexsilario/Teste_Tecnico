// 4º) Devido a um erro no pagamento do último mês, uma empresa acabou tendo um gato extra de R$1873003111,00 
//     sendo 16% deste valor destinado para os 782 funcionários do seu setor. 

//4.1 Dada a situação citada anteriormente, construa um algoritmo capaz de:
//    Recebendo uma listagem com os dados do colaborador (valor hora, horas feitas, pagamento, cpf e nome), 
//    devolver uma lista com os valores a ser debitado dos pagamentos de cada colaborador, 
//    podendo ser o valor parcelado num período de até 6 meses (dependendo do valor excedente).

#include <stdio.h>

	int main() 
	{
		float porc, acresc, desc, valhora, horastrab; // Calcular porcentagem de 16% R$ 1873003111,00
		int valor, cpf;
		//char colaborador[50];
		printf("Atencao, Erro na folha de pagamento\n\n");
		printf("Devido a um erro no pagamento do último mes,\n\n");
		printf("uma empresa acabou tendo um gato extra de R$ 1873003111,00\n\n");
		printf("sendo 16%% deste valor destinado para os 782 funcionários do seu setor.\n\n");
		printf("Visando corrigir este erro\n\n");
		printf("Digite o valor total da folha: R$ ");
		scanf("%i", &valor);
		porc = valor / 100 * 16;
		printf("16%% de %.1i eh %.16f\n\n", valor, porc); // ate aqui ta ok
		printf("\n\n\nos valores a ser debitado dos pagamentos de cada colaborador");
		printf("\n podendo ser o valor parcelado num periodo de ate 6 meses");
		printf("\n dependendo do valor excedente\n\n\n\n\n\n");
		
		return 0;
		
        //objetivo não alcançado.
	}