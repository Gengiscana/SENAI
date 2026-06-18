#include <stdio.h>
void main(){
	char time[100];
	int pontos;
	printf("Qual o nome do time? Quantos pontos ele fez?\n");
	scanf ("%[^\n] %d", &time, &pontos);
	if(pontos >= 20){
		printf("%s está classificado", time);
	}
	else if(pontos >= 10 && pontos < 20){
		printf("%s está em disputa", time);
	}
	else{
		printf("%s está eliminado", time);
	}
	getch();
}