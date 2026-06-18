#include <stdio.h>
void main(){
	float antes, depois;
	char produto [100];
	printf("Insira o nome do produto\n");
	scanf("%[^\n]",&produto);
	printf("Insira o preço\n");
	scanf("%f",&antes);
	depois = antes + antes * 5/100;
	printf("O novo valor do %s é de %f", produto, depois);
}