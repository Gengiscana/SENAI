#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char nomes[5] [50], aux[50];
	for (int i = 0; i < 5; i++){
		printf("Escreva o %d° nome:\n");
		scanf("%d", &nomes);
	}
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(nomes[i] [1] > nomes[j] [1]){
				aux = nomes[i];
				nomes[i] = nomes[j];
				nomes[j] = aux;
			}
		}
	}
	printf("Os nomes, em ordem alfabética:\n")
	for (int i = 0; i < 5; i++){
		printf("%s\n", nomes[i]);
	}
	getch();
}