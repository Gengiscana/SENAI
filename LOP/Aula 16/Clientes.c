#include <stdio.h>
#include <windows.h>

struct Cliente{
	char nome [50];
	int idade;
	char sexo;
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[100];
	int total_clientes = 0;
	int qtd_M = 0, qtd_F = 0;
	float soma_idade_total = 0;
	float soma_idade_M = 0, soma_idade_F = 0;
	FILE *arquivo = fopen("clientes.csv","r");
	if(arquivo == NULL){
		printf("Erro ao gravar o arquivo\n");
		getch();
		return 0;
	}
	char linha[100];
	fgets(linha, sizeof(linha), arquivo);
	while(fgets(linha, sizeof(linha), arquivo) != NULL){
		if(sscanf(linha, "%[^;];%d;%c", clientes[total_clientes].nome, &clientes[total_clientes].idade, &clientes[total_clientes].sexo) == 3){
			soma_idade_total += clientes[total_clientes].idade;
			if(clientes[total_clientes].sexo == 'M' || clientes[total_clientes].sexo == 'm'){
				qtd_M++;
				soma_idade_M += clientes[total_clientes].idade;
			}
			else if(clientes[total_clientes].sexo == 'F' || clientes[total_clientes].sexo == 'f'){
				qtd_F++;
				soma_idade_F += clientes[total_clientes].idade;
			}
			total_clientes++;
		}
	}
	fclose(arquivo);
	if(total_clientes == 0){
		printf("Nenhum dado encontrado no arquivo.\n");
		getch();
		return 0;
	}
	printf("RELATÓRIO DE CLIENTES\n");
	printf("%-25s, %-5s, %-4s\n", "Nome", "Idade", "Sexo");
	for(int i = 0; i < total_clientes; i++){
		printf("%-25s | %-5d | %-4c\n", clientes[i].nome, clientes[i].idade, clientes[i].sexo);
	}
	printf("ESTATÍSTICAS\n");
	printf("Total de clientes: %d\n", total_clientes);
	printf("Média de idade geral: %.2f\n", soma_idade_total/total_clientes);
	printf("\nQuantidade de Homens: %d\n", qtd_M);
	printf("Média da idade dos homens: %.2f anos", qtd_M > 0 ? (soma_idade_M / qtd_M) : 0);
	printf("\nQuantidade de Mulheres: %d\n", qtd_F);
	printf("Média da idade das mulheres: %.2f anos\n", qtd_F > 0 ? (soma_idade_F / qtd_F) : 0);
	getch();
}
