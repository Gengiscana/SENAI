#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	int maior;
	int pos;
	srand(time(NULL));
	for(int i = 0; i < 25; i++){
		vetor[i]=rand() % 101;
		printf("%d\n", vetor[i]);
		if(vetor[i] >= maior){
			maior = vetor[i];
			pos = i+1;
		}
	}
	int cont = 0;
	for(int i = 0; i < 25; i++){
		if(vetor[i] == maior){
			cont++;
		}
	}
	printf("\n\nO maior número foi: %d\nNa posição %d\nApareceu %d vezes", maior, pos, cont);
	getch();
}