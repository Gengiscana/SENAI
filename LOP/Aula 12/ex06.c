#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5];
	int verify, valor = 0, pos1, pos2;
	srand(time(NULL));
	for(int i = 0; i < 5; i++){ // mostra as linhas
			for(int j = 0;j < 5; j++){ //mostra as colunas
				matriz[i][j]=rand() % 101;
				printf("%d ", matriz[i][j]);
				}
			printf("\n");
		}
			printf("\n");
			printf("Digite o número\n");
			scanf("%d", &verify);
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 5; j++){
					if(matriz[i][j] == verify){
						valor = 1;
						pos1 = i;
						pos2 = j;
					}
				}
			}
			pos1 = pos1 + 1;
			pos2 = pos2 + 1;
			if(valor == 1){
				printf("O valor está na matriz, na linha %d e na posição %d", pos1, pos2);
			}
			else{
				printf("Esse valor não está na matriz");
			}
		getch();
	}