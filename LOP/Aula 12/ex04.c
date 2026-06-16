#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5];
	int menor;
	int pos1, pos2;
	srand(time(NULL));
	printf("	A\tB\tC\tD\tE\t\n");
	for(int i = 0; i < 5; i++){
		printf("%d\t", i+1);
		for(int j = 0; j < 5; j++){
			matriz[i][j]=rand() % 101;
			printf("%d\t", matriz[i][j]);
			if(i == 0 && j == 0){
				menor = matriz[i][j];
			}
			else if(menor > matriz[i][j]){
				menor = matriz[i][j];
				pos1 = i;
				pos2 = j;
			}
		}
		printf("\n");
	}
	printf("\n\nO menor número foi: %d\n", menor);
	printf("Está localizado na posição [%c,%d]", pos1, pos2+1);
	getch();
}