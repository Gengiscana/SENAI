#include<stdio.h>
void main(){
	char nome[8], sobrenome [10];
	printf("Digite seu nome\n");
	scanf("%s",nome);
	printf("Digite seu sobrenome\n");
	scanf("%s",sobrenome);
	printf("Seu nome é %s %s", nome, sobrenome);
	getch();
}