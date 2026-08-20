#include <stdio.h>
void main(){
	int i = 0;
	int x;
	while(i != 4){
		printf("Digite um numero, ou 4 para terminar\n");
		scanf("%d", &i);
		x = i*i;
		printf("Ao quadrado é %d\n", x);
	}
	printf("Fim");
	getch();
}