#include<stdio.h>
#include<windows.h>
#define MAX_LETRAS 100
#define MAX_LINHAS 50

struct Cliente{
	char nome[50];
	int idade;
	char email[100];
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int qtdLinhas = 0;
	struct Cliente clientes[5];
	FILE *arquivo = fopen("teste.txt","r");
	if(arquivo == NULL){
		printf("Erro ao gravar arquivo\n");
		getch();
		return 0;
	}
	char linha[MAX_LETRAS];
	while(fgets(linha,100,arquivo) != NULL && qtdLinhas < MAX_LINHAS){
		printf("%s", linha);
		linha[strcspn(linha,"\n")] = '\0'; //Remove o \n nas linhas
		qtdLinhas++;
		if(qtdLinhas > 1){
			sscanf(linha, "%49s[^,],%d,%99[^\n]",
			clientes[qtdLinhas - 2].nome
			);
		}
	}
	printf("\nO arquivo possui %d linhas", qtdLinhas);
	getch();
}