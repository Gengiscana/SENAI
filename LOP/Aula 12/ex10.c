#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char nomes[5] [50];
	for(int i = 0; i <= 4; i++){
		printf("Digite o %d° nome:\n", i + 1);
		scanf(" %[^\n]", &nomes[i]);
	}
	printf("Nomes escolhidos:\n");
	for(int j = 0; j <= 4; j++){
		printf("%s \n", nomes[j]);
	}
	getch();
}