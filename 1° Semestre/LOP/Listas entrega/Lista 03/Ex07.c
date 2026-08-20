#include <stdio.h>
void main(){
	int i = 0;
	while(i != 4){
		printf("Digite um numero, ou 4 para terminar\n");
		scanf("%d", &i);
	}
	printf("Fim");
	getch();
}