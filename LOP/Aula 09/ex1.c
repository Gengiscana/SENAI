#include <stdio.h>
void main(){
	float peso, imc, alt;
	printf("Qual peso?\n");
	scanf("%f", &peso);
	printf("Qual sua altura? (coloque em metros)\n");
	scanf("%f", &alt);
	imc = peso/(alt*alt);
	if(imc < 18.5){
		printf("Abaixo do peso, IMC %.1f", imc);
	}
	else if(imc >= 18.6 && imc <= 24.9){
		printf("Peso normal, IMC %.1f", imc);
	}
	else if(imc >= 25 && imc <= 29.9){
		printf("Sobrepeso, IMC %.1f", imc);
	}
	else if(imc >= 30 && imc <= 34.9){
		printf("Obesidade grau I, IMC %.1f", imc);
	}
	else if(imc >= 35 && imc <= 39.9){
		printf("Obesidade grau II, IMC %.1f", imc);
	}
	else{
		printf("Obesidade grau III, IMC %.1f", imc);
	}
	getch();
}