#include <stdio.h>
void main(){
	int idade;
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	if(idade < 12){
		printf("Você é uma criança");
	}
	else if(idade >= 12 && idade < 18){
		printf("Você é um adolescente");
	}
	else if(idade >= 18 && idade != 67){
		printf("Wow, você é um homão é não sabia");
	}
	else{
		printf("City boyyyyyy, city boyyyyyy, annnn six sevennnn, não peidaxxxx");
	}
	getch();
}