#include <stdio.h>
void main(){
	float valor, final;
	printf("Preço?\n");
	scanf("%f", &valor);
	if(valor > 500){
		final = valor-valor*10/100;
		printf("Após a aplicação do desconto deu um total de %.2f", final);
	}
	else if(valor > 200 && valor <= 500){
		final = valor - valor * 5/100;
		printf("Após a aplicação do desconto deu um total de %.2f", final);
	}
	else{
		printf("Não tem desconto");
	}
	getch();
}