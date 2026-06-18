#include <stdio.h>
void main(){
	float mul;
	int peso;-
	printf("Qual o peso do peixe\n");
	scanf("%d", &peso);
	if(peso <= 50){
		printf("Liberado");
	}
	else{
		mul = peso % 50;
		mul = mul * 4;
		printf("Pague a multa de R$%.2f", mul);
	}
	getch();
}