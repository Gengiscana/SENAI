#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int numeros[10], aux;
	for (int i = 0; i <= 9; i++){
		printf("Digite o %d° número:\n", i + 1);
		scanf("%d", &numeros[i]);
	}
	for(int i = 0; i < 10; i++){
		for(int j = i + 1; j < 10; j++){
			if(numeros[i] < numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("Em ordem decrescente:\n");
	for(int i = 0; i <= 9; i++){
		printf("%d ", numeros[i]);
	}
}