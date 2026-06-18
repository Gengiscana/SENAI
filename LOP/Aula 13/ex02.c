#include <stdio.h>
#include <windows.h>
int fatorial(int fa){
	int res = fa;
	for(int i = fa - 1; i > 1; i--){
		res = res * i;
	}
	return res;
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int req;
	printf("Digite um número\n");
	scanf("%d", &req);
	if(req >= 0){
		printf("O fatorial do número %d é: %d\n", req, fatorial(req));
	}
	else{
		printf("Não existe fatorial com número negativos");
	}
	getch();
}