#include<stdio.h>
void main(){
	char nome[8], sobrenome [10];
	printf("Digite seu nome:\n");
	scanf("%[^\n]", &nome);
	printf("Digite seu sobrenome:\n");
	scanf("%[^\n]", &sobrenome);
	fflush(stdin);
	printf("Seu nome é %s %s", nome, sobrenome);
	getch();
}