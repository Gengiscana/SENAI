#include <stdio.h>
void main(){
	char nome[100];
	char resp;
	float salario, porcentagem, novosa;
	printf("Digite o nome\n");
	scanf("%[^\n]",nome);
	printf("Informe o salário\n");
	scanf("%f",&salario);
	printf("Qual será a porcentagem?\n");
	scanf("%f",&porcentagem);
	printf("Aumento? Digite s para sim e n para não\n");
	scanf(" %c", &resp);
	if(resp == 's'){
		novosa = salario + porcentagem * salario/100;
		printf("Seu novo salário é %.2f",novosa);
	}
	else if(resp == 'n'){
		novosa = salario - porcentagem * salario/100;
		printf("Seu novo salário é %.2f",novosa);
	}