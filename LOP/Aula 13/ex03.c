#include <stdio.h>
#include <windows.h>
void primo(int a){
	int res;
	if(a <= 1){
		printf("Esse número não é primo");
		return;
	}
	for(int i = 1; i <= a; i++){
		res = a % i;
		if(res == 0 && i != a && i != 1){
			printf("Esse número não é primo");
			return;
		}
		else if(res == 0 && i == a){
			printf("Esse número é primo");
			return;
		}
	}
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	printf("Digite um número\n");
	scanf("%d", &num);
	primo(num);
}