#include <stdio.h>
void main(){
	int inteiro;
	printf("Digite um número inteiro\n");
	scanf("%d", &inteiro);
	if(inteiro > 100){
		printf("%d é maior que 100\n", inteiro);
		printf("Você é burro?");
	}
	else if(inteiro < 100 && inteiro != 67){
		printf("%d é menor que 100\n", inteiro);
		printf("Você é burro?");
	}
	else if(inteiro == 67){
		printf("Oh meu Deus, que número tuffo é esse? Não sabia que era permitido ser tão aurudo por aqui, mas continua sendo menor que 100");
	}
	else{
		printf("%d é igual a 100\n", inteiro);
		printf("Você é burro?");
	}
	getch();
}