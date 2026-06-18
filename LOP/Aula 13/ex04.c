#include <stdio.h>
#include <windows.h>
float media(int a, int b){
	float med = 0;
	med = (float)a/b;
	return med;
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int qnt, soma = 0;
	printf("Quantos números são?\n");
	scanf("%d", &qnt);
	int nums[qnt];
	printf("Quais são?\n");
	for(int i = 0; i < qnt; i++){
		scanf("%d", &nums[i]);
		soma = soma + nums[i];
	}
	printf("A média é: %.2f\n", media(soma, qnt));
}