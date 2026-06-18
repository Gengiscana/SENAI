#include <stdio.h>
void main() {
	char nome[100];
	float a, b, total;
	printf("Qual o nome do time?\n");
	scanf("%[^\n]",&nome);
	printf("Quantas vitórias eles teve?\n");
	scanf("%f",&a);
	printf("E empates?\n");
	scanf("%f",&b);
	total = a * 3 + b;
	printf("%s teve um total de %.0f pontos", nome, total);
	getch();
}
