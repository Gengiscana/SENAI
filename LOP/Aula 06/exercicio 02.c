#include <stdio.h>
void main(){
	int id;
	printf("Qual sua idade?\n");
	scanf("%d", &id);
	if(id >= 18){
		printf("Que homao");
	}
	else{
		printf("Saia daqui garotinho, voce nao tem aura");
	}
	getch();
}