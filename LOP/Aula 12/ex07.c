#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	int resp, aux;
	srand(time(NULL));
	for(int i; i < 25; i++){
		vetor[i]=rand() % 101;
	}
	printf("Como você deseja ver? (1 - Crescente; 2 - Decrescente; 3 - Aleatório)\n");
	scanf("%d", &resp);
	printf("\n");
	if(resp == 3){
		for(int i = 0; i < 25; i++){
			printf("%d ", vetor[i]);
			printf("\n");
		}
	}
	else if(resp == 1){
		for(int i = 0; i < 25; i++){
			for(int j = 0; j < 25; j++){
				if(vetor[i]<vetor[j]){
					aux = vetor[i];
					vetor[i]=vetor[j];
					vetor[j]=aux;
				}
			}
		}
	}
	else if(resp == 2){
		for(int i = 0; i < 25; i++){
			for(int j = 0; j < 25; j++){
				if(vetor[i]>vetor[j]){
					aux = vetor[i];
					vetor[i]=vetor[j];
					vetor[j]=aux;
				}
			}
		}
	}
	for(int i = 0; i < 25; i++){
		printf("%d ", vetor[i]);
		printf("\n");
	}
	getch();
}