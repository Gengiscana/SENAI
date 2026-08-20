#include <stdio.h>
void main(){
	int i;
	printf("Digite um número inteiro positivo\n");
	scanf("%d", &i);
	for(int x = 1; x < i; x+=2){
		printf("%d ", x);
	}
}