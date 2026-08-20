#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
struct Produtos{
	char nome[50];
	float preco;
	int quantidade;
	float total;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produtos produto[6];
	char nomes[50][6] = {
		"Lápis",
		"Borracha",
		"Caneta",
		"Caderno",
		"Femboy",
		"Tesoura"
	};
	
	srand(time(NULL));
	for(int i = 0; i < 6; i++){
		strcpy(produto[i].nome,nomes[i]);
		produto[i].preco = rand() % 101;
		produto[i].quantidade = rand() % 101;
	}
	
	printf("Produto\tPreço\tQtd.\n");
	for(int i = 0; i < 6; i++){
		produto[i].total = produto[i].preco * produto[i].quantidade;
		printf("%s\t%.2f\t%d | Total: R$%.2f\n\n", produto[i].nome, produto[i].preco, produto[i].quantidade, produto[i].total);
	}
	getch();
}