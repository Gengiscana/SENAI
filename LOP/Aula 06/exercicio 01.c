#include <stdio.h>
void main(){
	int a;
	printf("Digite um número\n");
	scanf("%d", &a);
	if (a > 0){
		printf("Esse número é positivo");
	}
	else if(a < 0){
		printf("Esse número é negativo");
	}
	else{
		printf (" Isso é 0");
	}
	getch();
}