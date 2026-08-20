#include<stdio.h>
void main(){
	float x, y, z;
	printf("DIgite um número real\n");
	scanf("%f", &x);
	printf("Digite outro número real\n");
	scanf("%f", &y);
	
	z = x / y;
	
	printf("O primeiro número dividido pelo segundo é %.2f",z);
	getch();
}