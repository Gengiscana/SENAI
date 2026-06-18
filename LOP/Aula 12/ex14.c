#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int numeros[10], max, min, posmax, posmin; 
	for(int i = 0; i < 10; i++){
		printf("Indique o %d° número:\n", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	max = numeros[0];
	min = numeros[0];
	for(int i = 0; i < 10; i++){
		if (numeros[i] > max){
			max = numeros[i];
			posmax = i + 1;
		}
		if(numeros[i] < min){
			min = numeros[i];
			posmin = i + 1;
		}
	}
	printf("O maior número é %d, na posição %d.\nO menor número é %d, na posição %d.", max, posmax, min, posmin);
	getch();
}