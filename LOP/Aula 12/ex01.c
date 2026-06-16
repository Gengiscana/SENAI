#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int matriz[5][5];
	srand(time(NULL));
	for(int i = 0; i < 5; i++){ // mostra as linhas
			for(int j = 0;j < 5; j++){ //mostra as colunas
				matriz[i][j]=rand() % 101;
				printf("%d\n", matriz[i][j]);
			}
		}
	getch();
}