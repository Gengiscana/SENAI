#include <stdio.h>
void main(){
	int a, b, c;
	printf("Digite um número inteiro");
	scanf("%d", &a);
	printf("DIgite outro número");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("A soma dos números é %d",c);
	getch();
}