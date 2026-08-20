#include<stdio.h>
void main(){
	char e, f, g;-
	printf("Digite um caracter\n");
	scanf(" %c", &e);
	printf("Digite outro caracter\n");
	scanf(" %c", &f);
	
	g = e + f;
	
	printf("A soma dos dois caracteres é %c",g);
	getch();
}-