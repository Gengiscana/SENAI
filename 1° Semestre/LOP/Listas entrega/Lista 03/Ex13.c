#include <stdio.h>
void main(){
	int i;
	int f = 1;
	printf("Digite um numero inteiro\n");
	scanf("%d", &i);
	for(int x = i; x >= 1; x--){
		f = f*x;
	}
	printf("O fatorial é %d", f);
	getch();
}