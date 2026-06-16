#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	int verify, valor = 0, pos;
	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		vetor[i]=rand() % 101;
		pos = i+1;
		printf("%d\t %d°\t", vetor[i], pos);
		printf("\n");
		}
		printf("\n\nDigite o número:\n");
		scanf("%d", &verify);
		for(int i = 0; i < 100; i++){
			if(vetor[i] == verify){
				valor = 1;
				pos = i+1;
				break;
			}
	}
			if(valor == 1){
			printf("Esse número está no vetor, na posição %d", pos);
		}
			else{
				printf("Esse número não está no vetor");
			}
	getch();
}