#include <stdio.h>
float a, b, c;
void main(){
	printf("Quantos qual a velocidade em KM/H\n");
	scanf("%d",&a);
	printf("Qual a distância a ser percorrida?\n");
	scanf("%d",&b);
	c = b/a;
	printf("Falta %.2f horas para chegar ao destino", c);
	getch();
}