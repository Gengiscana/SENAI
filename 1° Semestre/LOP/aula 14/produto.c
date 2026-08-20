#include <stdio.h>
#include <windows.h>
struct Produtos{
	char nome[50];
	float preco;
	int quantidade;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int quantos = 0;
	printf("Quantos produtos deseja cadastrar:");
	scanf("%d", &quantos);
	
	struct Produtos produto[quantos];
	for(int i = 0; i < quantos; i++){
		printf("Nome do produto: ");
		scanf("%s", &produto[i].nome);
		printf("Preço do produto: ");
		scanf("%f", &produto[i].preco);
		printf("Quantidade: ");
		scanf("%d", &produto[i].quantidade);
	}
	
	float total = 0;
	printf("Produto\tPreço\tQtd.\n");
	for(int i = 0; i < 5; i++){
		total = produto[i].preco * produto[i].quantidade;
		printf("%s\t%.2f\t%d | Total: R$%.2f\n\n", produto[i].nome, produto[i].preco, produto[i].quantidade, total);
	}
	getch();
}