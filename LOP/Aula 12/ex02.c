#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	srand(time(NULL));
	for(int i; i < 25; i++){
		vetor[i]=rand() % 101;
		printf("%d", vetor[i]);
		printf("\n");
	}
	getch();
}