#include <stdio.h>
void main(){
	int idade;
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	if(idade >= 16){
		printf("Pode votar");
	}
	else{
		printf("Vaza");
	}
	getch();
}