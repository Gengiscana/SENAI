#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[4];
	printf("Insira cinco números:\n");
	for(int i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	for(int i = 4; i >= 0; i--){
		printf("%d\t", vetor[i]);
	}
}