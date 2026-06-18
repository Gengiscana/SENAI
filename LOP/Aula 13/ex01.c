#include <stdio.h>
#include <windows.h>

int soma(int a, int b){
	return a + b; //Variaveis Locais
}

int subtracao(int a, int b){
	return a - b;
}

int multiplicacao(int a, int b){
	return a * b;
}

float divisao(int a, int b){
	if(b == 0){
		return 0;
	}
	else{
		return a / (float) b;
	}
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n1, n2; //Variaveis Globais
	char op;
	printf("Digite dois números inteiros:\n");
	scanf("%d %d", &n1, &n2);
	printf("Escolha uma opção\n");
	printf("\t'+' Somar\n");
	printf("\t'-' Subtrair\n");
	printf("\t'*' Multiplicar\n");
	printf("\t'/' Dividir\n");
	scanf(" %c", &op);
	switch(op){
		case '+': printf("A soma de %d + %d = %d", n1, n2, soma(n1, n2)); break;
		case '-': printf("A subtração de %d - %d = %d", n1, n2, subtracao(n1, n2)); break;
		case '*': printf("A multiplicação de %d * %d = %d", n1, n2, multiplicacao(n1, n2)); break;
		case '/': printf("A divisão de %d / %d = %.2f", n1, n2, divisao(n1, n2)); break;
		default: printf("Opção inválida");
	}
	getch();
}